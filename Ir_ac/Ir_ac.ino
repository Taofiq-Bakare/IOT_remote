#include <esp_int_wdt.h>
#include <esp_task_wdt.h>
#include <Arduino.h>
#include <IRsend.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include "BluetoothSerial.h"
#include "IRac.h"
#include "EEPROM.h"

const uint16_t kIrLed = 18;  // ESP8266 GPIO pin to use. Recommended: 4 (D2).
IRac ac(kIrLed);



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
