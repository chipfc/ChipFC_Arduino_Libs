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
  melody.sing(CHAU_LEN_BA);
  delay(500);
}

