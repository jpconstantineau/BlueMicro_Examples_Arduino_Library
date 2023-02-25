// SPDX-FileCopyrightText: 2023 Pierre Constantineau
//
// SPDX-License-Identifier: MIT

// Designed for the Luddite 2 60% keyboard from 40percent.club
// https://www.40percent.club/2018/08/luddite-2.html
// This keyboard was designed for the Arduino Pro Micro.

// Multiple controllers have been designed for the same footprint as the Pro Micro
// JPConstantineau's BlueMicro and BlueMicro840
// Nice Keyboard's Nice!Nano
// Adafruit KB2040 
// Sparkfun Pro Micro 2040

// Adapters have been created to adapt the ItsyBitsy to the Pro Micro footprint
// https://github.com/KMKfw/kmk_firmware/blob/master/hardware/README.md
// This enables the following controllers:
// Adafruit ItsyBitsy RP2040
// Adafruit ItsyBitsy M0 Express
// Adafruit ItsyBitsy M4 Express

// The code below has been tested with these controllers:
// BlueMicro840 (Nordic nRF52840 DK)
// BlueMicroV2.1 (Adafruit Feather nRF52832) // not yet implemented
// Adafruit KB2040 (with Adafruit TinyUSB USB Stack)
// Adafruit ItsyBitsy RP2040 (with Adafruit TinyUSB USB Stack)
// Adafruit ItsyBitsy M0 Express 
// Adafruit ItsyBitsy M4 Express 
// Sparkfun Pro Micro RP2040 (with Adafruit TinyUSB USB Stack) // not tested yet

#include <bluemicro_exmpl.h>


/**************************************************************************************************************************/
// LUDDITE 60% Hardware Definition
// You shouldn't need to edit this, unless you have different keyboard hardware
/**************************************************************************************************************************/
// Pro Micro Pins
// Row: 1, 2, 5, 6, 7, 8, 9, 10 
// Col: 20, 19, 18, 17, 16, 15, 14, 13
// Speaker : 11
// Backlight: 12

#define MATRIX_ROW_PINS {pin_to_gpio[1], pin_to_gpio[2], pin_to_gpio[5],pin_to_gpio[6], pin_to_gpio[7],pin_to_gpio[8],pin_to_gpio[9],pin_to_gpio[10]}
#define MATRIX_COL_PINS {pin_to_gpio[20], pin_to_gpio[19], pin_to_gpio[18], pin_to_gpio[17], pin_to_gpio[16], pin_to_gpio[15], pin_to_gpio[14], pin_to_gpio[13]}
#define DIODE_DIRECTION COL2ROW
#define LEDPIN pin_to_gpio[12]
#define SPEAKERPIN pin_to_gpio[11]

// The KEYMAP macro moves keys around to match where in the matrix a specific key is located
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K10, K11, K12, K13, K14, K15, \
    K16, K17, K20, K21, K22, K23, K24, K25, K26, K27, K30, K31, K32, K33, \
    K34, K35, K36, K37, K40, K41, K42, K43, K44, K45, K46, K47, K50, \
    K51, K52, K53, K54, K55, K56, K57, K60, K61, K62, K63, K64, \
    K65, K66, K67,                K70,                K71, K72, K73, K74\
)  \
     K00, K01, K02, K03, K04, K05, K06, K07 , \
     K10, K11, K12, K13, K14, K15, K16, K17 , \
     K20, K21, K22, K23, K24, K25, K26, K27 , \
     K30, K31, K32, K33, K34, K35, K36, K37 , \
     K40, K41, K42, K43, K44, K45, K46, K47 , \
     K50, K51, K52, K53, K54, K55, K56, K57 , \
     K60, K61, K62, K63, K64, K65, K66, K67 , \
     K70, K71, K72, K73, K74, KC_NO,KC_NO,KC_NO  \


/**************************************************************************************************************************/
//  60% Keymap Definition
/**************************************************************************************************************************/

uint16_t keymap[] = \
    {KEYMAP(\    
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC, \
        KC_TAB,KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS, \
        LAYER_2,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,  \
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT, \
        KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                     LAYER_1, KC_RALT, KC_APP,KC_RCTL),
     KEYMAP(\ 
        KC_ESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,KC_F12, KC_BSPC, \
        KC_TAB,KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS, \
        LAYER_2,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,  \
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT, \
        KC_LCTL,KC_LGUI,KC_LALT,          KC_SPC,                     LAYER_1, KC_RALT, KC_APP,KC_RCTL)};


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

const uint16_t  matrixsize = (sizeof(rows) / sizeof(byte))*(sizeof(columns) / sizeof(byte));
const uint16_t  keymapsize = (sizeof(keymap) / sizeof(uint16_t));


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
  yield();  // try this here for testing...
  uint8_t  layer = 0;
  layer = getLayer(activeKeys, AddLayers, getKeycode);
  //layer = getLayer(activeKeys, AddLayers);
  //layer = getLayer(activeKeys, getKeycode);
  //layer = getLayer(activeKeys);
  
  activeKeycodes = processKeys(activeKeys,activeKeycodes,getKeycode,layer);
  //activeKeycodes = processKeys(activeKeys,activeKeycodes,getKeycode);
  //activeKeycodes = processKeys(activeKeys,activeKeycodes,layer);
  // activeKeycodes = processKeys(activeKeys,activeKeycodes);
  activeKeycodes = sendKeys(activeKeycodes); 
  bluemicro_hid.processQueues(CONNECTION_MODE_AUTO);
  pause(millis(),10,activeKeys.empty(),60000);
}
