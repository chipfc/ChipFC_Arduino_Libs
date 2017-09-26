/*
 * Project name: 
 * Description: 
 * 
 * Created on Mon Sep 25 2017
 * Copyright (c) 2017 ChipFC Team
 *      www.chipfc.com
 */

#include <Melody.h>

Melody melody(2);

void setup()
{
}

void loop()
{
  melody.sing(HAPPY_BIRTHDAY);
  delay(1000);
}

