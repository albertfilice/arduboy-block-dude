/*
  Albert Filice
  Box Dude, or Block Dude
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


