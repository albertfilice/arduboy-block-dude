#ifndef ASSETS_H
#define ASSETS_H

PROGMEM const unsigned char box[] = {
0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x7E, 0x00, 
0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00
}

PROGMEM const unsigned char brick[] = {
0x24, 0x00, 0x24, 0x00, 0x24, 0x00, 0x24, 0x00, 0x24, 0x00, 
0xE7, 0x00, 0x24, 0x00, 0x3C, 0x00
}

PROGMEM const unsigned char door[] = {
0xFF, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x7E, 0x00, 
0x6E, 0x00, 0x00, 0x00, 0xFF, 0x00
}

PROGMEM const unsigned char dudeLeft[] = {
0xFF, 0x00, 0xBF, 0x00, 0xAA, 0x00, 0x16, 0x00, 0x39, 0x00, 
0x36, 0x00, 0x8A, 0x00, 0xFF, 0x00
}

PROGMEM const unsigned char dudeRight[] = {
0xFF, 0x00, 0x8A, 0x00, 0x36, 0x00, 0x39, 0x00, 0x16, 0x00, 
0xAA, 0x00, 0xBF, 0x00, 0xFF, 0x00
}

#endif
