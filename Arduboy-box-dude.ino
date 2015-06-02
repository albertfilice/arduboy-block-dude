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

Arduboy arduboy;


void setup()
{
  arduboy.start();
  arduboy.print("Hello World!");
  arduboy.display();
}

void loop()
{
  arduboy.display();
}


