// SPDX-FileCopyrightText: 2023 Pierre Constantineau
//
// SPDX-License-Identifier: MIT

// Designed for the 5x5 modular keyboard from 40percent.club
// https://www.40percent.club/2018/04/5x5.html
// This keyboard was designed for the Arduino Micro.

// The code below has been tested with these controllers:
// BlueMacro840 (Nordic nRF52840 DK)

#include <bluemicro_exmpl.h>

/**************************************************************************************************************************/
// 5x5x5 75% Hardware Definition
// You shouldn't need to edit this, unless you have different keyboard hardware
/**************************************************************************************************************************/
// Micro Pins - GPIOs are for the BlueMacro - See here: https://nrf52.jpconstantineau.com/docs/bluemacro840_v1
/* Column  pin configuration
 * col:  0  1  2  3    4  5  6    7  8  9  10 11 12 13 14
 * pin:  D7 E6 B4 B5   B6 B7 D6   F7 F6 F5 F4 F1 F0 B3 B1
 * GPIO: 6  5  8  1.09 4  12 1.06 24 22 13 15 ?? ?? 9  10
 */
/* Row  pin configuration
 * row:  0    1  2  3  4   
 * pin:  B2   D1 D0 D4 C6
 * GPIO: 1.11 30 2  29 26
 */

#define MATRIX_ROW_PINS {43,30,2,29,26} 
#define MATRIX_COL_PINS {6,5,8,41,4,12,38,24,22,13,15,17,20,9,10} 
#define DIODE_DIRECTION COL2ROW
#define LEDPIN 36
/**************************************************************************************************************************/
//  75% Keymap Definition
/**************************************************************************************************************************/

uint16_t keymap[] = {\
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,        KC_9,     KC_0,       KC_MINUS,    KC_EQUAL,    KC_BSPACE,    KC_BSPACE,\
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,        KC_O,     KC_P,       KC_LBRACKET, KC_RBRACKET, KC_BSLASH,    KC_PGUP,\
        KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,        KC_L,     KC_SCOLON,  KC_QUOTE,    KC_ENTER,    KC_ENTER,     KC_PGDN,\
        KC_LSHIFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMMA,    KC_DOT,   KC_SLASH,   KC_RSHIFT,   KC_RSHIFT,   KC_UP,        KC_NO, \
        KC_LCTRL,  KC_APP,  KC_LGUI, KC_LALT, LAYER_1, KC_SPC,  KC_SPC,  KC_SPC, KC_SPC,      LAYER_1,  KC_RALT,    KC_RGUI,     KC_LEFT,     KC_DOWN,      KC_RIGHT, };


/**************************************************************************************************************************/

  #if DIODE_DIRECTION == COL2ROW
    #define sleep(r,c)   sleep_C2R(r,c)
    #define scanMatrix(a,b,c) scanMatrix_C2R(a,b,c)
  #else
    #define sleep(r,c)   sleep_R2C(r,c)
    #define scanMatrix(a,b,c) scanMatrix_R2C(a,b,c)
  #endif

trigger_keys_t activeKeys;
trigger_keycodes_t activeKeycodes;

byte rows[] MATRIX_ROW_PINS;        // Contains the GPIO Numbers 
byte columns[] MATRIX_COL_PINS;     // Contains the GPIO Numbers 

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
