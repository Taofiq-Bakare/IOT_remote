
#define NUMBER_OF_AC_MODELS     11

#define Daikin_EcoKing          1       //Eco King
#define Daikin_Innovaire        2
#define Electrolux              3
#define Hitachi                 4
#define Midea                   5
#define Panasonic               6
#define Samsung                 7
#define LG                      8
#define Mitsubishi              9
#define Hisense                 10
#define Sharp                   11
#define AC_012                  12
#define AC_013                  13
#define AC_014                  14
#define AC_015                  15
#define AC_016                  16
#define AC_017                  17
#define AC_018                  18
#define AC_019                  19
#define AC_020                  20
#define AC_021                  21
#define AC_022                  22
#define AC_023                  23
#define AC_024                  24
#define AC_025                  25
#define AC_026                  26
#define AC_027                  27
#define AC_028                  28
#define AC_029                  29
#define AC_030                  30
#define AC_031                  31
#define AC_032                  32
#define AC_033                  33
#define AC_034                  34
#define AC_035                  35
#define AC_036                  36
#define AC_037                  37
#define AC_038                  38
#define AC_039                  39
#define AC_040                  40
#define AC_041                  41
#define AC_042                  42
#define AC_043                  43
#define AC_044                  44
#define AC_045                  45
#define AC_046                  46
#define AC_047                  47
#define AC_048                  48
#define AC_049                  49
#define AC_050                  50
#define AC_051                  51
#define AC_052                  52
#define AC_053                  53
#define AC_054                  54
#define AC_055                  55
#define AC_056                  56
#define AC_057                  57
#define AC_058                  58
#define AC_059                  59
#define AC_060                  60
#define AC_061                  61
#define AC_062                  62
#define AC_063                  63
#define AC_064                  64
#define AC_065                  65
#define AC_066                  66
#define AC_067                  67
#define AC_068                  68
#define AC_069                  69
#define AC_070                  70
#define AC_071                  71
#define AC_072                  72
#define AC_073                  73
#define AC_074                  74
#define AC_075                  75
#define AC_076                  76
#define AC_077                  77
#define AC_078                  78
#define AC_079                  79
#define AC_080                  80
#define AC_081                  81
#define AC_082                  82
#define AC_083                  83
#define AC_084                  84
#define AC_085                  85
#define AC_086                  86
#define AC_087                  87
#define AC_088                  88
#define AC_089                  89
#define AC_090                  90
#define AC_091                  91
#define AC_092                  92
#define AC_093                  93
#define AC_094                  94
#define AC_095                  95
#define AC_096                  96
#define AC_097                  97
#define AC_098                  98
#define AC_099                  99
#define AC_100                  100

String AC_brands[] = {"Daikin_EcoKing","Daikin_Innovaire","Electrolux","Hitachi","Midea",
                      "Panasonic","Samsung","LG","Mitsubishi","Hisense",
                      "Sharp","AC_012","AC_013","AC_014","AC_015",
                      "AC_016","AC_017","AC_018","AC_019","AC_020",
                      "AC_021","AC_022","AC_023","AC_024","AC_025",
                      "AC_026","AC_027","AC_028","AC_029","AC_030",
                      "AC_031","AC_032","AC_033","AC_034","AC_035",
                      "AC_036","AC_037","AC_038","AC_039","AC_040",
                      "AC_041","AC_042","AC_043","AC_044","AC_045",
                      "AC_046","AC_047","AC_048","AC_049","AC_050",
                      "AC_051","AC_052","AC_053","AC_054","AC_055",
                      "AC_056","AC_057","AC_058","AC_059","AC_060",
                      "AC_061","AC_062","AC_063","AC_064","AC_065",
                      "AC_066","AC_067","AC_068","AC_069","AC_070",
                      "AC_071","AC_072","AC_073","AC_074","AC_075",
                      "AC_076","AC_077","AC_078","AC_079","AC_080",
                      "AC_081","AC_082","AC_083","AC_084","AC_085",
                      "AC_086","AC_087","AC_088","AC_089","AC_090",
                      "AC_091","AC_092","AC_093","AC_094","AC_095",
                      "AC_096","AC_097","AC_098","AC_099","AC_100",
                      };


typedef struct{
    uint16_t* Power_ON;
    uint16_t* Power_OFF;
    uint16_t* Fan_Auto;
    uint16_t* Fan_Low;
    uint16_t* Fan_Medium;
    uint16_t* Fan_High;
    uint16_t** Temperature;
    int bufferSize;
    int Frequency;
} IRCodes;

IRCodes AC, Fan;

void initCode( int Code ){
  switch (Code){
    case Daikin_EcoKing:
      AC.Frequency        = 38;
      AC.bufferSize       = 135;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{9900,9850, 9900,9850, 4700,2500, 450,350, 400,950, 400,950, 400,400, 450,950, 400,400, 400,400, 450,350, 400,400, 400,950, 450,350, 450,350, 450,950, 400,400, 400,400, 450,950, 450,950, 450,350, 400,400, 400,950, 400,950, 400,400, 450,950, 400,400, 400,400, 400,950, 400,400, 400,400, 450,350, 400,400, 400,400, 400,400, 400,950, 400,400, 400,400, 400,400, 450,950, 400,400, 450,350, 450,350, 450,950, 400,400, 450,350, 400,400, 450,950, 400,400, 450,350, 400,400, 450,350, 400,400, 400,400, 450,350, 400,400, 400,950, 400,400, 400,400, 450,350, 400,400, 400,950, 450,950, 400,400, 450,350, 400,950, 400,400, 450};  // UNKNOWN 1B9BC8C
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{9900,9850, 9900,9850, 4700,2500, 450,350, 400,950, 400,950, 400,400, 450,950, 400,400, 400,400, 450,350, 400,400, 400,950, 450,350, 450,350, 450,950, 400,400, 400,400, 450,950, 450,950, 450,350, 400,400, 400,950, 400,950, 400,400, 450,950, 400,400, 400,400, 400,950, 400,400, 400,400, 450,350, 400,400, 400,400, 400,400, 400,950, 400,400, 400,400, 400,400, 450,950, 400,400, 450,350, 450,350, 450,950, 400,400, 450,350, 400,400, 450,950, 400,400, 450,350, 400,400, 450,350, 400,400, 400,400, 450,350, 400,400, 400,950, 400,400, 400,400, 450,350, 400,400, 400,950, 450,950, 400,400, 450,350, 400,950, 400,400, 450};  // UNKNOWN 1B9BC8C

      AC.Fan_Low          = new uint16_t[AC.bufferSize]{9900,9800, 9900,9800, 4700,2500, 450,350, 450,950, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,950, 450,950, 450};  // UNKNOWN C403822D
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{9900,9800, 9900,9800, 4700,2500, 450,350, 450,950, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,950, 450};  // UNKNOWN 32718F3B
      AC.Fan_High         = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2500, 450,350, 450,900, 450,900, 450,300, 450,950, 450,350, 400,350, 450,300, 450,300, 450,950, 450,350, 400,350, 450,300, 450,900, 450,300, 450,350, 450,900, 450,300, 450,300, 450,350, 450,350, 450,300, 450,350, 450,350, 450,950, 450,900, 450,350, 450,300, 450,350, 450,350, 450,300, 450,350, 450,900, 450,350, 450,350, 450,300, 450,950, 450,300, 450,350, 450,350, 450,900, 450,300, 450,350, 450,350, 450,950, 450,350, 450,300, 450,350, 450,350, 450,300, 450,350, 450,350, 450,350, 450,900, 450,300, 450,350, 450,350, 450,300, 450,950, 450,350, 450,950, 450,350, 450,300, 450,900, 450};  // UNKNOWN 19639D45
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2500, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,900, 450,900, 450,350, 400,350, 450,350, 450,350, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,300, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,900, 450,900, 450};  // UNKNOWN 2B69E35F

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{9900,9800, 9950,9850, 4700,2500, 450,350, 450,950, 450,950, 400,400, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 400,400, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,950, 450,350, 450,950, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 400,400, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 400,950, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 400,400, 450,350, 450,950, 400,400, 450,350, 400,400, 450,950, 450,350, 450};  // UNKNOWN 6F0A15B0
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2450, 450,350, 450,900, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,400, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,950, 450,350, 450,900, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 400,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,950, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 400,400, 450,350, 450,950, 450,350, 450,950, 400,400, 450,950, 450,350, 450};  // UNKNOWN AF3DFACA
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2450, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 500,300, 450,350, 450,900, 450,350, 500,300, 450,900, 450,900, 450,350, 450,900, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 500,900, 450,950, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 500,900, 450,900, 450,350, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,900, 450,350, 450};  // UNKNOWN F0DF8C4A
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2450, 450,350, 450,900, 450,900, 500,300, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 500,300, 450,350, 450,350, 500,300, 450,900, 450,900, 450,350, 450,900, 450,350, 450,900, 500,900, 500,300, 450,350, 450,350, 450,900, 450,350, 500,300, 450,900, 450,350, 450,350, 500,300, 450,900, 450,350, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,350, 450,350, 450,900, 500,300, 450,350, 450,900, 450,900, 450,350, 500};  // UNKNOWN 6E0E2882
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{9900,9850, 9900,9850, 4700,2500, 450,350, 400,950, 450,950, 450,350, 450,950, 450,350, 450,350, 400,400, 450,350, 450,950, 450,350, 450,350, 450,950, 400,400, 400,400, 450,350, 400,400, 450,350, 450,350, 400,950, 450,950, 450,350, 450,950, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 400,400, 400,950, 450,350, 450,350, 450,350, 450,950, 400,400, 450,350, 450,950, 450,950, 450,350, 400,400, 400,400, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 400,400, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 400,950, 450,950, 450};  // UNKNOWN B9FD6D23
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{9950,9800, 9950,9800, 4700,2450, 450,350, 450,950, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,900, 450,350, 450,950, 450,350, 400,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 400,400, 400,950, 450,350, 450,950, 450,900, 450,950, 450,900, 450};  // UNKNOWN 4B40988D
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2450, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 500,300, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 500,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 500,300, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,350, 450};  // UNKNOWN 7B3791C8
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2500, 450,350, 450,900, 450,900, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,950, 450,900, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 400,950, 450,350, 450,350, 450,350, 500,900, 450,900, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 400};  // UNKNOWN 6288B5AA
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{9900,9800, 9900,9800, 4700,2500, 450,350, 450,950, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,950, 450,950, 450,350, 450,950, 450,350, 450,950, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 450};  // UNKNOWN 2BBA0784
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{9900,9850, 9950,9800, 4700,2450, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,900, 500,900, 450,350, 450,900, 450,350, 450,900, 450,350, 450,900, 450,900, 500,300, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 500,300, 500,300, 500,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 500,300, 450,300, 450,900, 450,350, 500,900, 450,300, 450,300, 450,900, 450,350, 500,300, 450,350, 500,300, 450,900, 450,350, 450,350, 450,900, 500,300, 450,300, 500};  // UNKNOWN 17670E5A
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{9950,9800, 9950,9800, 4700,2450, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 500,900, 450,900, 450,350, 450,900, 450,350, 450,900, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 500,300, 450,350, 450,350, 450,900, 450,900, 450,350, 450,350, 450,900, 500,300, 450,350, 450,350, 450,350, 450,900, 450,350, 450,900, 450,900, 450,350, 450,350, 450};  // UNKNOWN 89E5AC90
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2450, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,950, 450,900, 450,350, 450,950, 450,350, 450,900, 450,350, 450,950, 450,900, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,900, 450,400, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,950, 450,950, 450,900, 450,350, 450,350, 450,900, 500,300, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450};  // UNKNOWN 17FBF84C
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{9900,9850, 9900,9850, 4700,2500, 450,350, 450,950, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,950, 450,950, 450,350, 450,950, 450,350, 450,950, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,950, 450,350, 450,950, 450,350, 450};  // UNKNOWN B21C8FB2
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{9900,9800, 9950,9800, 4700,2450, 450,350, 450,900, 450,900, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 500,300, 450,350, 450,350, 450,900, 450,900, 450,350, 450,900, 500,300, 450,900, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,350, 450,900, 450,350, 450,350, 450,900, 450,350, 450,900, 450,350, 450,350, 450,350, 450,350, 450,900, 450,350, 450,900, 450,350, 450,900, 450,350, 450};  // UNKNOWN 3B6E9CB8
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{9900,9850, 9900,9850, 4700,2500, 450,350, 450,950, 450,950, 400,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,950, 450,350, 450,950, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,350, 450,950, 450,950, 450,350, 450,350, 450,350, 450,350, 450,950, 450,350, 450,350, 450,950, 450,350, 450,950, 450};  // UNKNOWN 5B1433A3
      break;

    case Daikin_Innovaire:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case Electrolux:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
    case Hitachi:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
    case Midea:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
    case Panasonic:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
    case Samsung:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
    case LG:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
    case Mitsubishi:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
    case Hisense:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
    case Sharp:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_012:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_013:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_014:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;   

  case AC_015:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_016:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_017:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_018:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break; 

  case AC_019:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_020:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;    

  case AC_021:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_022:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_023:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_024:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;  

  case AC_025:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_026:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_027:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_028:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_029:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_030:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_031:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_032:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_033:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_034:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;  

  case AC_035:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_036:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_037:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_038:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_039:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_040:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_041:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_042:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_043:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_044:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break; 

  case AC_045:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_046:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
       AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
  case AC_047:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
       AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_048:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_049:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_050:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;    

    case AC_051:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

    case AC_052:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_053:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_054:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_055:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_056:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_057:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_058:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_059:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_060:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
    case AC_061:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_062:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_063:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_064:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;   

  case AC_065:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_066:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_067:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_068:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break; 

  case AC_069:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_070:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;    

  case AC_071:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_072:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_073:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_074:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;  

  case AC_075:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_076:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_077:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_078:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_079:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_080:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_081:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_082:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_083:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_084:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;  

  case AC_085:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_086:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_087:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_088:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_089:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_090:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_091:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_092:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_093:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_094:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break; 

  case AC_095:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_096:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
       AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
  case AC_097:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
       AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_098:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;

  case AC_099:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;
      
  case AC_100:
      AC.Frequency        = 38;
      AC.bufferSize       = 500;
      AC.Power_ON         = new uint16_t[AC.bufferSize]{0}; 
      AC.Power_OFF        = new uint16_t[AC.bufferSize]{0}; 
      
      AC.Fan_Low          = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Medium       = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_High         = new uint16_t[AC.bufferSize]{0}; 
      AC.Fan_Auto         = new uint16_t[AC.bufferSize]{0}; 

      AC.Temperature      = new uint16_t*[15];
      AC.Temperature [0]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [1]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [2]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [3]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [4]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [5]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [6]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [7]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [8]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature [9]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[10]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[11]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[12]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[13]  = new uint16_t[AC.bufferSize]{0}; 
      AC.Temperature[14]  = new uint16_t[AC.bufferSize]{0};   
      break;  
  }
}
