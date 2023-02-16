// SPDX-FileCopyrightText: 2022 BlueMicro_Examples_Arduino_Library  contributors (https://github.com/jpconstantineau/BlueMicro_Examples_Arduino_Library/graphs/contributors)
//
// SPDX-License-Identifier: BSD-3-Clause

#ifndef BLUEMICRO_EXAMPLES_H
#define BLUEMICRO_EXAMPLES_H


const uint32_t bluemicro840_pin_to_gpio[] = 
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



const uint32_t kb2040_pin_to_gpio[] = 
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

const uint32_t promicro_pin_to_gpio[] = 
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
 21,// 13:D10
 23,// 14:MOSI
 20,// 15:MISO
 22,// 16:SCK
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


const uint32_t promicro_pin_to_itsybitsy[] = 
{
 0, // 0: D+
 21, // 1: D0
 20, // 2: D1
 0, // 3: GND
 0, // 4: GND
 22 ,// 5: D2
 23 ,// 6: D3
 30 ,// 7: D4
 29 ,// 8: D5
 28 ,// 9: D6
 27 ,// 10:D7
 26 ,// 11:D8
 25 ,// 12:D9
 12,// 13:D10
 11,// 14:MOSI
 10,// 15:MISO
 9,// 16:SCK
 8,// 17:A0
 7,// 18:A1
 6,// 19:A2
 5,// 20:A3
 0, // 21:3.3V
 0, // 22: RST
 0, // 23: GND
 0, // 24: RAW
 0  // D-
 
};

const uint32_t itsybitsy_rp2040_pin_to_gpio[] = 
{
 0, // n/a
 0, // 1: RST
 0, // 2: 3.3V
 0, // 3: AREF
 0, // 4: VHI
 26 ,// 5: A0
 27 ,// 6: A1
 28 ,// 7: A2
 29 ,// 8: A3
 24 ,// 9: A4/D24
 25 ,// 10:A5/D25
 18 ,// 11:SCK
 19 ,// 12:MOSI
 20,// 13:MISO
 12,// 14:D2...
 0,// 15:EN
 0,// 16:SWDIO
 0,// 17:SWDCK
 5,// 18:D3
 4,// 19:D4
 1,// 20:D0
 0, // 21:D1
 2, // 22: SDA
 3, // 23: SCL
 14,// 24: D5
 6, // 25: RAW
 7,// 26:EN
 8,// 27:D9
 9,// 28:D11
 10,// 29:D12
 11,// 30:D13
 0, // 31:VBUS
 0, // 32: GND
 0, // 33: VBAT
 11  // LED
};

const uint32_t itsybitsy_m0_pin_to_gpio[] = 
{
 0, // n/a
 0, // 1: RST
 0, // 2: 3.3V
 0, // 3: AREF
 0, // 4: VHI
 14 ,// 5: A0
 15 ,// 6: A1
 16 ,// 7: A2
 17 ,// 8: A3
 18 ,// 9: A4/D24
 19 ,// 10:A5/D25
 30 ,// 11:SCK
 29 ,// 12:MOSI
 28,// 13:MISO
 2,// 14:D2...
 0,// 15:EN
 0,// 16:SWDIO
 0,// 17:SWDCK
 3,// 18:D3
 4,// 19:D4
 0,// 20:D0
 1, // 21:D1
 26, // 22: SDA
 27, // 23: SCL
 5,// 24: D5
 7, // 25: RAW
 9,// 26:EN
 10,// 27:D9
 11,// 28:D11
 12,// 29:D12
 13,// 30:D13
 0, // 31:VBUS
 0, // 32: GND
 0, // 33: VBAT
 13  // LED
};

const uint32_t itsybitsy_m4_pin_to_gpio[] = 
{
 0, // n/a
 0, // 1: RST
 0, // 2: 3.3V
 0, // 3: AREF
 0, // 4: VHI
 14 ,// 5: A0
 15 ,// 6: A1
 16 ,// 7: A2
 17 ,// 8: A3
 18 ,// 9: A4/D24
 19 ,// 10:A5/D25
 24 ,// 11:SCK
 25 ,// 12:MOSI
 23,// 13:MISO
 2,// 14:D2...
 0,// 15:EN
 0,// 16:SWDIO
 0,// 17:SWDCK
 3,// 18:D3
 4,// 19:D4
 0,// 20:D0
 1, // 21:D1
 21, // 22: SDA
 22, // 23: SCL
 5,// 24: D5
 7, // 25: RAW
 9,// 26:EN
 10,// 27:D9
 11,// 28:D11
 12,// 29:D12
 13,// 30:D13
 0, // 31:VBUS
 0, // 32: GND
 0, // 33: VBAT
 13  // LED
};

const uint32_t aib2040_pin_to_gpio[] =
{
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[0]], 
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[1]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[2]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[3]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[4]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[5]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[6]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[7]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[8]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[9]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[10]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[11]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[12]],   
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[13]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[14]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[15]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[16]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[17]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[18]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[19]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[20]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[21]],  
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[22]], 
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[23]],
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[24]],
  itsybitsy_rp2040_pin_to_gpio[promicro_pin_to_itsybitsy[25]]
};

const uint32_t aibm0_pin_to_gpio[] =
{
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[0]], 
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[1]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[2]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[3]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[4]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[5]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[6]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[7]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[8]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[9]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[10]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[11]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[12]],   
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[13]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[14]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[15]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[16]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[17]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[18]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[19]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[20]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[21]],  
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[22]], 
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[23]],
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[24]],
  itsybitsy_m0_pin_to_gpio[promicro_pin_to_itsybitsy[25]]
};

const uint32_t aibm4_pin_to_gpio[] =
{
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[0]], 
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[1]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[2]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[3]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[4]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[5]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[6]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[7]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[8]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[9]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[10]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[11]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[12]],   
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[13]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[14]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[15]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[16]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[17]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[18]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[19]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[20]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[21]],  
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[22]], 
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[23]],
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[24]],
  itsybitsy_m4_pin_to_gpio[promicro_pin_to_itsybitsy[25]]
};
#endif