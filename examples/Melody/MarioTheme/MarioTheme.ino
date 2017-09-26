/*
 * Project name: 
 * Description: 
 * 
 * Created on Mon Sep 25 2017
 * Copyright (c) 2017 ChipFC Team
 *      www.chipfc.com
 */

#include <Melody.h>

Melody mario_melody(13);

void setup()
{
}

void loop()
{
  mario_melody.sing(1);
  delay(3000);
}

