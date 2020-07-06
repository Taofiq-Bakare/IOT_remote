// **** INCLUDES *****
#include <esp_int_wdt.h>
#include <esp_task_wdt.h>
#include <Arduino.h>
#include <IRsend.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include "BluetoothSerial.h"
#include "ACBrandList.h"
#include "EEPROM.h"

#define MSG_BUFFER_SIZE  50
#define EEPROM_SIZE      64
#define redPin           25
#define greenPin         33
#define bluePin          32

enum wifi_setup_stages {NONE, AC_SELECT, SELECT_COMPLETE, SCAN_START, RESCAN, SCAN_COMPLETE, SSID_ENTERED, WAIT_PASS, PASS_ENTERED, WAIT_CONNECT, LOGIN_FAILED, CONNECT_SUCCESS};
enum wifi_setup_stages wifi_stage = NONE;

String AC_number = "03";

#define _AM2302
//#define _RHT03

#ifdef _AM2302
  #include "DHT.h"
  #define DHTTYPE         DHT22  
  #define DHTPIN          17  
  DHT dht(DHTPIN, DHTTYPE);
#else
  #include <SparkFun_RHT03.h>
  #define RHT03_DATA_PIN  17   
  RHT03 rht; 
#endif

String ssids_array[20];
String network_string, AC_brand_string, OPTIONS, tempString;
String connected_string;
int connectionCounter = 0;
int rebootCount       = 0;

char* pref_ssid  = (char*)malloc(50);
char* pref_pass  = (char*)malloc(50);

String client_wifi_ssid;
String client_wifi_password;

const char* mqtt_server = "iotfoe.ddns.net";

const uint16_t IRLed_front = 18; 
const uint16_t IRLed_top   = 5;  

IRsend irsend_top(IRLed_top);
IRsend irsend_front(IRLed_front); 
 
int counter          = 0;
int NUMBERofSAMPLES  = 10;
int sum_t = 0, t = 0;
int sum_h = 0, h = 0;
int curr_h = 0, prev_h = 0;
int curr_t = 0, prev_t = 0;

int AC_Selection = 0;

int pwr_curr = 0, pwr_prev = 0;
int fan_curr = 0, fan_prev = 0;
int tmp_curr = 0, tmp_prev = 0;
char msg[MSG_BUFFER_SIZE];

int addr    = 0;
boolean SetupFlag = false;
boolean bluetoothMode = false;

WiFiClient espClient;
PubSubClient client(espClient);
BluetoothSerial SerialBT;

void hard_restart() {
  esp_task_wdt_init(1,true);
  esp_task_wdt_add(NULL);
  while(true);
}

void callback_wifi(esp_spp_cb_event_t event, esp_spp_cb_param_t *param){

  if (event == ESP_SPP_SRV_OPEN_EVT) {
    wifi_stage = AC_SELECT;
  }
  
  if (event == ESP_SPP_DATA_IND_EVT && wifi_stage == SELECT_COMPLETE) {
    AC_Selection = SerialBT.readString().toInt();
    initCode(AC_Selection);
    String bt_string = AC_brands[AC_Selection - 1] + " is selected";
    SerialBT.println(bt_string);
    wifi_stage = SCAN_START;
  }
  
  if (event == ESP_SPP_DATA_IND_EVT && wifi_stage == SCAN_COMPLETE) { // data from phone is SSID
    OPTIONS = SerialBT.readString();
    OPTIONS.trim();
    wifi_stage = SSID_ENTERED;
  }
  
  if (event == ESP_SPP_DATA_IND_EVT && wifi_stage == WAIT_PASS) { // data from phone is password
    client_wifi_password = SerialBT.readString();
    client_wifi_password.trim();
    wifi_stage = PASS_ENTERED;
  }
}

void array_to_string(byte array[], unsigned int len, char buffer[]){ 
  for (unsigned int i = 0; i < len; i++){
      byte nib2 = (array[i] >> 0) & 0x0F;
      buffer[i] = nib2  < 0xA ? '0' + nib2  : 'A' + nib2  - 0xA;
  }
  buffer[len*2] = '\0';
}

void callback(char* topic, byte* payload, unsigned int length) {

  char str[30] = {0};
  array_to_string(payload, length, str);
  
  int CMD = String(str).toInt();
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  Serial.println(CMD);
  
  if(CMD == 1){
    Serial.println("Turn ON/OFF AC");
    ledcWrite(1, 256);
    ledcWrite(2, 256);
    ledcWrite(3, 200);
    irsend_top.sendRaw(AC.Power_OFF, AC.bufferSize, AC.Frequency);
    irsend_front.sendRaw(AC.Power_OFF, AC.bufferSize, AC.Frequency);
    delay(300);
    ledcWrite(1, 256);
    ledcWrite(2, 256);
    ledcWrite(3, 256);
  }
  else if(CMD >= 2 && CMD <= 5){
    Serial.print("AC Fan Speed: ");
    ledcWrite(1, 256);
    ledcWrite(2, 256);
    ledcWrite(3, 200);

    switch (CMD){
      case 32:
        Serial.println("Auto");
        irsend_top.sendRaw(AC.Fan_Auto, AC.bufferSize, AC.Frequency); 
        irsend_front.sendRaw(AC.Fan_Auto, AC.bufferSize, AC.Frequency); 
        break;
      case 33:
        Serial.println("Low");
        irsend_top.sendRaw(AC.Fan_Low, AC.bufferSize, AC.Frequency); 
        irsend_front.sendRaw(AC.Fan_Low, AC.bufferSize, AC.Frequency); 
        break;
      case 34:
        Serial.println("Medium");
        irsend_top.sendRaw(AC.Fan_Medium, AC.bufferSize, AC.Frequency); 
        irsend_front.sendRaw(AC.Fan_Medium, AC.bufferSize, AC.Frequency); 
        break;
      case 35:
        Serial.println("High");
        irsend_top.sendRaw(AC.Fan_High, AC.bufferSize, AC.Frequency); 
        irsend_front.sendRaw(AC.Fan_High, AC.bufferSize, AC.Frequency);         
        break;
    }
    delay(300);
    ledcWrite(1, 256);
    ledcWrite(2, 256);
    ledcWrite(3, 256);
  }
  else if(CMD >= 16 && CMD <= 30){
    Serial.print("Set Temperature: ");
    Serial.println(CMD);
    ledcWrite(1, 256);
    ledcWrite(2, 256);
    ledcWrite(3, 200);
    irsend_top.sendRaw(AC.Temperature[CMD - 16], AC.bufferSize, AC.Frequency);
    irsend_front.sendRaw(AC.Temperature[CMD - 16], AC.bufferSize, AC.Frequency);
    delay(300);
    ledcWrite(1, 256);
    ledcWrite(2, 256);
    ledcWrite(3, 256);
  }
}

void scan_wifi_networks()
{
  WiFi.mode(WIFI_STA);
  int n =  WiFi.scanNetworks();
  if (n == 0) {
    SerialBT.println("no networks found");
  } else {
    delay(1000);
    for (int i = 0; i < n; ++i) {
      ssids_array[i + 1] = WiFi.SSID(i);
      network_string = i + 1;
      network_string = network_string + ": " + WiFi.SSID(i);
      SerialBT.println(network_string);
    }
  }
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    String clientId = AC_number + "_SmartController";
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");  
      tempString = AC_number + "_ACSmart_out_h";
      client.publish(tempString.c_str(), "00");
      tempString = AC_number + "_ACSmart_out_t";
      client.publish(tempString.c_str(), "00");   
      tempString = AC_number + "_ACSmart_in";
      client.subscribe(tempString.c_str());
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void setup() {

  Serial.begin(115200);
  Serial.println("Initializing EEPROM...");
  if (!EEPROM.begin(4096)) {
    Serial.println("Failed to initialise EEPROM");
    Serial.println("System rebooting...");
    delay(1000);
    hard_restart();
  }
  Serial.println("EEPROM Initialized Sucessfully");

  irsend_top.begin();
  irsend_front.begin();
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(redPin,   1);
  ledcAttachPin(greenPin, 2);
  ledcAttachPin(bluePin,  3);
  
  ledcSetup(1, 12000, 8); // 12 kHz PWM, 8-bit resolution
  ledcSetup(2, 12000, 8);
  ledcSetup(3, 12000, 8);
  
  ledcWrite(1, 256);
  ledcWrite(2, 256);
  ledcWrite(3, 256);

  #ifdef _AM2302
    dht.begin();
  #else
    rht.begin(RHT03_DATA_PIN);
  #endif
  
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  
  connectionCounter = 0;
  rebootCount = 0;

//for (int i = 0; i < EEPROM_SIZE; i++) EEPROM.write(i, 0);
//EEPROM.commit();
 
  int ssid_Len = 0, pass_Len = 0;
  ssid_Len  = byte(EEPROM.read(0));
  if( ssid_Len > 0){
    for (int i = 0; i < EEPROM_SIZE; i++){
       Serial.print(byte(EEPROM.read(i))); Serial.print(" ");
       if(i > 0 && i < ssid_Len+1)                          pref_ssid[i-1]            = char(EEPROM.read(i));
       else if(i == ssid_Len + 1)                           pass_Len                  = byte(EEPROM.read(i));
       else if(i > ssid_Len + 1 && i < pass_Len+ssid_Len+2) pref_pass[i-(ssid_Len+2)] = char(EEPROM.read(i));
       else if(i == pass_Len+ssid_Len+2)                    AC_Selection              = byte(EEPROM.read(i)); 
    }
    pref_ssid[ssid_Len] = '\0';
    pref_pass[pass_Len] = '\0';
    
    initCode(AC_Selection);

    Serial.println();
    Serial.print(pref_ssid);
    Serial.print(' ');
    Serial.print(pref_pass);
    Serial.print(' ');
    Serial.println(AC_Selection);
      
    Serial.print("Connecting");
    WiFi.begin(pref_ssid, pref_pass);
    delay(200);
    while (WiFi.status() != WL_CONNECTED) {
      ledcWrite(1, 100);
      ledcWrite(2, 256);
      ledcWrite(3, 256);
      delay(500);
      ledcWrite(1, 256);
      ledcWrite(2, 256);
      ledcWrite(3, 256);
      delay(500);
      Serial.print(".");
      connectionCounter++;
      if(connectionCounter == 10){
        WiFi.begin(pref_ssid, pref_pass);
        connectionCounter = 0;
        rebootCount++; 
        if(rebootCount == 3){  
          byte retryCounter = byte(EEPROM.read(63));
          retryCounter = retryCounter + 1;
          if(retryCounter == 3){
            for (int i = 0; i < EEPROM_SIZE; i++) EEPROM.write(i, 0);
            EEPROM.commit();
            bluetoothMode = true;
            Serial.println("Bluetooth Mode");
            SerialBT.register_callback(callback_wifi);
            tempString = AC_number + "_ACSmartControl";
            SerialBT.begin(tempString); //Bluetooth device name
            break;
          }
          else{
            EEPROM.write(63, retryCounter);
            EEPROM.commit();
            hard_restart();
          }
        }
        Serial.println();
        Serial.print("Connecting");
      }
    }
    
    ledcWrite(1, 256);
    ledcWrite(2, 180);
    ledcWrite(3, 256);
    delay(1000);
    ledcWrite(1, 256);
    ledcWrite(2, 256);
    ledcWrite(3, 256);

    Serial.print("\nConnected to ");
    Serial.println(pref_ssid);
    client.setServer(mqtt_server, 1883);
    client.setCallback(callback);
    SetupFlag = true;
  }
  else{
    bluetoothMode = true;
    Serial.println("Bluetooth Mode");
    SerialBT.register_callback(callback_wifi);
    tempString = AC_number + "_ACSmartControl";
    SerialBT.begin(tempString); //Bluetooth device name
  }
}

void loop() {
  switch (wifi_stage)
  {
    case AC_SELECT:
      tempString = "";
      SerialBT.println("List of Supported AC Brands");
      for (int i = 0; i < NUMBER_OF_AC_MODELS; i++) {
        tempString = i + 1;
        tempString = tempString + ": " + AC_brands[i];
        SerialBT.println(tempString);
      }
      SerialBT.println("Please enter AC number");
      wifi_stage = SELECT_COMPLETE;
      break;
      
    case SCAN_START:
      SerialBT.println("Scanning Wi-Fi networks");
      scan_wifi_networks();
      SerialBT.println("Please enter the number for your Wi-Fi");
      wifi_stage = SCAN_COMPLETE;
      break;
      
    case SSID_ENTERED:
      if(OPTIONS.equals("rescan")){
        wifi_stage = SCAN_START;
      }
      else{
        int client_wifi_ssid_id = OPTIONS.toInt();
        client_wifi_ssid = ssids_array[client_wifi_ssid_id];
        SerialBT.println("Please enter your Wi-Fi password");
        wifi_stage = WAIT_PASS;
      }
      break;

    case PASS_ENTERED:
    {
      SerialBT.println("Please wait for Wi-Fi connection...");

      client_wifi_ssid.toCharArray(pref_ssid, client_wifi_ssid.length()+1);
      pref_ssid[client_wifi_ssid.length()+2] = '\0';
      
      client_wifi_password.toCharArray(pref_pass, client_wifi_password.length()+1);
      pref_pass[client_wifi_password.length()+2] = '\0';
        
      WiFi.begin(pref_ssid, pref_pass);
      delay(200);
      while (WiFi.status() != WL_CONNECTED) {
        ledcWrite(1, 100);
        ledcWrite(2, 256);
        ledcWrite(3, 256);
        delay(250);
        ledcWrite(1, 256);
        ledcWrite(2, 256);
        ledcWrite(3, 256);
        delay(250);
      }

      for (int i = 0; i < EEPROM_SIZE; i++) EEPROM.write(i, 0);
      
      EEPROM.write(addr, strlen(pref_ssid));
      addr = addr + 1;
      for (int i = 0; i < strlen(pref_ssid); i++){
        EEPROM.write(addr, pref_ssid[i]);
        addr = addr + 1;
      }
      EEPROM.write(addr, strlen(pref_pass));
      addr = addr + 1;
      for (int i = 0; i < strlen(pref_pass); i++){
        EEPROM.write(addr, pref_pass[i]);
        addr = addr + 1;
      }
      EEPROM.write(addr, AC_Selection);
      EEPROM.commit();
       
      ledcWrite(1, 256);
      ledcWrite(2, 180);
      ledcWrite(3, 256);
      delay(1000);
      ledcWrite(1, 256);
      ledcWrite(2, 256);
      ledcWrite(3, 256);
    
      SetupFlag = true;
      
      SerialBT.print("Connected to ");
      SerialBT.println(pref_ssid);
      SerialBT.println("Bluetooth disconnecting...");
      delay(1000);
      SerialBT.flush();
      SerialBT.disconnect();
      SerialBT.end();
      bluetoothMode = false;
      delay(1000);
      wifi_stage = CONNECT_SUCCESS;
      delay(1000);
      client.setServer(mqtt_server, 1883);
      client.setCallback(callback);
      
      break;
    }
    case LOGIN_FAILED:
      SerialBT.println("Wi-Fi connection failed");
      Serial.println("Wi-Fi connection failed");
      delay(2000);
      wifi_stage = SCAN_START;
      break;
  }

  if(WiFi.status() == WL_CONNECTED){
    if (!client.connected()) {
      reconnect();
    }
    client.loop();
    delay(100);
    #ifdef _AM2302
      h = dht.readHumidity();
      t = dht.readTemperature();
      if (isnan(h) || isnan(t)) {
        Serial.println("Failed to read from DHT sensor!");
      }
      else{
        sum_h = sum_h + h;
        sum_t = sum_t + t;
        counter++;
        if(counter == NUMBERofSAMPLES){
          curr_h = sum_h/NUMBERofSAMPLES;
          curr_t = sum_t/NUMBERofSAMPLES;
          if(curr_h != prev_h || curr_t != prev_t){
            Serial.print("Temp: ");
            Serial.print(t - 6);
            Serial.print("\t Hum: ");
            Serial.println(h);
      
            String msg_str = String(curr_t - 6);
            msg_str.toCharArray(msg, msg_str.length()+1);
            tempString = AC_number + "_ACSmart_out_t";
            client.publish(tempString.c_str(), msg);
            delay(250);
      
            msg_str = String(curr_h);
            msg_str.toCharArray(msg, msg_str.length()+1);
            tempString = AC_number + "_ACSmart_out_h";
            client.publish(tempString.c_str(), msg);
            delay(250);

            prev_h = curr_h;
            prev_t = curr_t;
          }
          counter = 0;
          sum_h   = 0;
          sum_t   = 0; 
        } 
      }
    #else
      int updateRet = rht.update();
      if (updateRet == 1){
        sum_h = sum_h + (int)rht.humidity();
        sum_t = sum_t + (int)rht.tempC();
        counter++;
        if(counter == NUMBERofSAMPLES){
          curr_h = sum_h/NUMBERofSAMPLES;
          curr_t = sum_t/NUMBERofSAMPLES;
          if(curr_h != prev_h || curr_t != prev_t){
            Serial.print("Temp: ");
            Serial.print(t - 6);
            Serial.print("\t Hum: ");
            Serial.println(h);
      
            String msg_str = String(curr_t - 6);
            msg_str.toCharArray(msg, msg_str.length()+1);
            tempString = AC_number + "_ACSmart_out_t";
            client.publish(tempString.c_str(), msg);
            delay(250);
      
            msg_str = String(curr_h);
            msg_str.toCharArray(msg, msg_str.length()+1);
            tempString = AC_number + "_ACSmart_out_h";
            client.publish(tempString.c_str(), msg);
            delay(250);

            prev_h = curr_h;
            prev_t = curr_t;
          }
          counter = 0;
          sum_h   = 0;
          sum_t   = 0; 
        } 
      }
      else{
        Serial.println("Failed to read from DHT sensor!");
      } 
    #endif
  }
  else if(SetupFlag == true){
    Serial.println("Error in WiFi connection");
    hard_restart();
  }
  delay(100);
}
