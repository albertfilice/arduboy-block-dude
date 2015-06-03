 /*
  Breakout
 Copyright (C) 2011 Sebastian Goscik
 All rights reserved.

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 */

#include <SPI.h>
#include "Arduboy.h"
#include "assets.h"

Arduboy arduboy;

boolean carrying = false;


// 0 = empty
// 1 = brick
// 2 = box
// 3 = door
// 4 = dude

byte levelone[5][20] = {
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1},
  {1,0,0,0,1,0,0,0,1,0,2,0,1,0,2,0,4,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};

void setup()
{
  arduboy.start();
  arduboy.print("Hello World!");
  arduboy.display();
}

void drawLevelScreen(byte level)
{
  switch (level)
  {
    case 1:
      level = "levelone";
      break;
  }
  
  for(byte i = level[0].length; i > 0; i--)
  {
    arduboy.print("ok");
  }
}

void loop()
{
  arduboy.clearDisplay();
  arduboy.display();
  drawLevelScreen(1);
}


