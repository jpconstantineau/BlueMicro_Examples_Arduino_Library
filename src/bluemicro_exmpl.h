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


#endif