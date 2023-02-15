// SPDX-FileCopyrightText: 2023 Pierre Constantineau
//
// SPDX-License-Identifier: MIT

// Supports 
// - Adafruit Feather nRF52832
// - Nordic nRF52840 DK

#ifdef ARDUINO_ARCH_NRF52 // includes both NRF52832_XXAA and NRF52840_XXAA 
  #include <bluemicro_nrf52.h>
#endif
#ifdef ARDUINO_ARCH_RP2040 // for RP2040 Boards
  #include <bluemicro_rp2040.h>
#endif

/**************************************************************************************************************************/
// LUDDITE with BlueMicro840
/**************************************************************************************************************************/

/* 
// Pro Micro Pins
// Row: 1, 2, 5, 6, 7, 8, 9, 10 
// Col: 20, 19, 18, 17, 16, 15, 14, 13
// Speaker : 11
// Backlight: 12

const uint32_t pin_to_gpio[] = 
{
 0, // 0: No pin 0
 6, // 1: 
 8, // 2:
 0, // 3: GND
 0, // 4: GND
 15,// 5: 
 17,// 6:
 20,// 7:
 13,// 8:
 24,// 9:
 9, // 10:
 10,// 11:
 38,// 12:
 43,// 13:
 28,// 14:
 3, // 15:
 45,//16:
 2, // 17:
 29,// 18:
 26,// 19:
 30,// 20:
 12,// 21:
 18,// 22: RST
 0, // 23: GND
 0, // 24: RAW
 42,// Blue LED
 36 // Red LED
};


#define MATRIX_ROW_PINS {pin_to_gpio[1], pin_to_gpio[2], pin_to_gpio[5],pin_to_gpio[6], pin_to_gpio[7],pin_to_gpio[8],pin_to_gpio[9],pin_to_gpio[10]}
#define MATRIX_COL_PINS {pin_to_gpio[20], pin_to_gpio[19], pin_to_gpio[18], pin_to_gpio[17], pin_to_gpio[16], pin_to_gpio[15], pin_to_gpio[14], pin_to_gpio[13]}
#define DIODE_DIRECTION COL2ROW
#define LEDPIN pin_to_gpio[12]

#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K10, K11, K12, K13, K14, K15, \
    K16, K17, K20, K21, K22, K23, K24, K25, K26, K27, K30, K31, K32, K33, \
    K34, K35, K36, K37, K40, K41, K42, K43, K44, K45, K46, K47, K50, \
    K51, K52, K53, K54, K55, K56, K57, K60, K61, K62, K63, K64, \
    K65, K66, K67,                K70,                K71, K72, K73, K74\
) { \
     K00, K01, K02, K03, K04, K05, K06, K07 , \
     K10, K11, K12, K13, K14, K15, K16, K17 , \
     K20, K21, K22, K23, K24, K25, K26, K27 , \
     K30, K31, K32, K33, K34, K35, K36, K37 , \
     K40, K41, K42, K43, K44, K45, K46, K47 , \
     K50, K51, K52, K53, K54, K55, K56, K57 , \
     K60, K61, K62, K63, K64, K65, K66, K67 , \
     K70, K71, K72, K73, K74, KC_NO,KC_NO,KC_NO  \
}

uint16_t keymap[] = \
    KEYMAP(    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC, \
        KC_TAB,KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS, \
        LAYER_2,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,  \
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT, \
        KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                     LAYER_1, KC_RALT, KC_APP,KC_RCTL);

*/
/**************************************************************************************************************************/
// LUDDITE with KB2040
/**************************************************************************************************************************/
// Pro Micro Pins
// Row: 1, 2, 5, 6, 7, 8, 9, 10 
// Col: 20, 19, 18, 17, 16, 15, 14, 13
// Speaker : 11
// Backlight: 12

const uint32_t pin_to_gpio[] = 
{
 0, // 0: D+
 0, // 1: D0
 1, // 2: D1
 0, // 3: GND
 0, // 4: GND
 2 ,// 5: D2
 3 ,// 6: D3
 4 ,// 7: D4
 5 ,// 8: D5
 6 ,// 9: D6
 7 ,// 10:D7
 8 ,// 11:D8
 9 ,// 12:D9
 10,// 13:D10
 19,// 14:MOSI
 20,// 15:MISO
 18,// 16:SCK
 26,// 17:A0
 27,// 18:A1
 28,// 19:A2
 29,// 20:A3
 0, // 21:3.3V
 0, // 22: RST
 0, // 23: GND
 0, // 24: RAW
 0  // D-
 
};


#define MATRIX_ROW_PINS {pin_to_gpio[1], pin_to_gpio[2], pin_to_gpio[5],pin_to_gpio[6], pin_to_gpio[7],pin_to_gpio[8],pin_to_gpio[9],pin_to_gpio[10]}
#define MATRIX_COL_PINS {pin_to_gpio[20], pin_to_gpio[19], pin_to_gpio[18], pin_to_gpio[17], pin_to_gpio[16], pin_to_gpio[15], pin_to_gpio[14], pin_to_gpio[13]}
#define DIODE_DIRECTION COL2ROW
#define LEDPIN pin_to_gpio[12]
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K10, K11, K12, K13, K14, K15, \
    K16, K17, K20, K21, K22, K23, K24, K25, K26, K27, K30, K31, K32, K33, \
    K34, K35, K36, K37, K40, K41, K42, K43, K44, K45, K46, K47, K50, \
    K51, K52, K53, K54, K55, K56, K57, K60, K61, K62, K63, K64, \
    K65, K66, K67,                K70,                K71, K72, K73, K74\
) { \
     K00, K01, K02, K03, K04, K05, K06, K07 , \
     K10, K11, K12, K13, K14, K15, K16, K17 , \
     K20, K21, K22, K23, K24, K25, K26, K27 , \
     K30, K31, K32, K33, K34, K35, K36, K37 , \
     K40, K41, K42, K43, K44, K45, K46, K47 , \
     K50, K51, K52, K53, K54, K55, K56, K57 , \
     K60, K61, K62, K63, K64, K65, K66, K67 , \
     K70, K71, K72, K73, K74, KC_NO,KC_NO,KC_NO  \
}

uint16_t keymap[] = \
    KEYMAP(    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC, \
        KC_TAB,KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS, \
        LAYER_2,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,  \
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT, \
        KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                     LAYER_1, KC_RALT, KC_APP,KC_RCTL);


  #if DIODE_DIRECTION == COL2ROW
    #define sleep(r,c)   sleep_C2R(r,c)
    #define scanMatrix(a,b,c) scanMatrix_C2R(a,b,c)
  #else
    #define sleep(r,c)   sleep_R2C(r,c)
    #define scanMatrix(a,b,c) scanMatrix_R2C(a,b,c)
  #endif


trigger_keys_t activeKeys;
trigger_keycodes_t activeKeycodes;


byte rows[] MATRIX_ROW_PINS;        // Contains the GPIO Pin Numbers 
byte columns[] MATRIX_COL_PINS;     // Contains the GPIO Pin Numbers 
/**************************************************************************************************************************/


trigger_keycodes_t processKeys(trigger_keys_t activeKeys, trigger_keycodes_t activeKeycodes)
{
  //Serial.print("P");
    for (auto pressedkey : activeKeys) 
    {
         // Serial.print(pressedkey);
        //  Serial.print(" ");
         uint16_t keycode = keymap[pressedkey]; 
         activeKeycodes.push_back(keycode);
    }
  //  Serial.println("");
  return activeKeycodes;
}



/**************************************************************************************************************************/
void pause(unsigned long timestamp, uint16_t cycletime, bool nokeys, unsigned long sleeptime)
{
  static unsigned long lasttime =0;
  static unsigned long lastkeytime =0;
  unsigned long diff = timestamp - lasttime;
  unsigned long diffkey = timestamp - lastkeytime;
  lasttime = timestamp;
  if (!nokeys)
  {
    lastkeytime = timestamp;
  }
  if (diffkey> sleeptime) 
  {                                        
        sleep(rows,columns);
  }

  delay(((diff) < 15*cycletime/10)?cycletime:1);
}

/**************************************************************************************************************************/
void setup() {
  // put your setup code here, to run once:
  bluemicro_hid.begin(); 
  Serial.begin(115200);
  Serial.println("BlueMicro_HID Large Matrix Tests");
  activeKeys.reserve(10);
  activeKeycodes.reserve(10);
  
  #ifdef LEDPIN
    pinMode(LEDPIN, OUTPUT);
  #endif  
}
/**************************************************************************************************************************/
void loop() {
  // put your main code here, to run repeatedly:                                         
  activeKeys = scanMatrix(activeKeys,rows,columns);
  
  // turn on LED when pressing keys
  #ifdef LEDPIN
    digitalWrite(LEDPIN, (activeKeys.empty()?LOW:HIGH));
  #endif
  
  activeKeycodes = processKeys(activeKeys,activeKeycodes);
  activeKeycodes = sendKeys(activeKeycodes); 
  bluemicro_hid.processQueues(CONNECTION_MODE_AUTO);
  pause(millis(),10,activeKeys.empty(),60000);
}