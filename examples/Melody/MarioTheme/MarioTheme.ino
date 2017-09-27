/*
 * Project name: 
 * Description: 
 * 
 * Created on Mon Sep 25 2017
 * Copyright (c) 2017 ChipFC Team
 *      www.chipfc.com
 */

#include <Melody.h>

int buzzer_pin = 2;

Melody melody(buzzer_pin);

void setup()
{
}

void loop()
{
  mario_melody.sing(MARIO_THEME_MELODY);
  delay(1000);
}

