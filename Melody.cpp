/*
 * Project name: 
 * Description: 
 * 
 * Created on Mon Sep 25 2017
 * Copyright (c) 2017 ChipFC Team
 *      www.chipfc.com
 */

#include "Arduino.h"
#include "Melody.h"
#include "Melody_key_tones.h"

Melody::Melody(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

/*
 * MARIO_THEME_MELODY
 */
int mario_theme_melody[] = {
  NOTE_E7,  NOTE_E7,  0,        NOTE_E7,
  0,        NOTE_C7,  NOTE_E7,  0,
  NOTE_G7,  0,        0,        0,
  NOTE_G6,  0,        0,        0,

  NOTE_C7,  0,        0,        NOTE_G6,
  0,        0,        NOTE_E6,  0,
  0,        NOTE_A6,  0,        NOTE_B6,
  0,        NOTE_AS6, NOTE_A6,  0,

  NOTE_G6,  NOTE_E7,  NOTE_G7,
  NOTE_A7,  0,        NOTE_F7,  NOTE_G7,
  0,        NOTE_E7,  0,        NOTE_C7,
  NOTE_D7,  NOTE_B6,  0,        0,

  NOTE_C7,  0,        0,        NOTE_G6,
  0,        0,        NOTE_E6,  0,
  0,        NOTE_A6,  0,        NOTE_B6,
  0,        NOTE_AS6, NOTE_A6,  0,

  NOTE_G6,  NOTE_E7,  NOTE_G7,
  NOTE_A7,  0,        NOTE_F7,  NOTE_G7,
  0,        NOTE_E7,  0,        NOTE_C7,
  NOTE_D7,  NOTE_B6,  0,        0
};

int mario_theme_tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

/*
 * MARIO_UNDERWORLD_MELODY
 */
int mario_underworld_melody[] = {
  NOTE_C4,  NOTE_C5,  NOTE_A3,  NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4,  NOTE_C5,  NOTE_A3,  NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3,  NOTE_F4,  NOTE_D3,  NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3,  NOTE_F4,  NOTE_D3,  NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,        NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3,  NOTE_CS4,
  NOTE_C4,  NOTE_FS4, NOTE_F4,  NOTE_E3,  NOTE_AS4,   NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3,  NOTE_GS3,
  0,        0,        0
};

int mario_underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6,  18, 18, 18,
  6,  6,
  6,  6,
  6,  6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3,  3,  3
};

/*
 * HAPPY_BIRTHDAY
 */
int happy_birthday_melody[]= {
  NOTE_G3,  NOTE_G3, NOTE_A3, NOTE_G3,  NOTE_C4, NOTE_B3,
  NOTE_G3,  NOTE_G3, NOTE_A3, NOTE_G3,  NOTE_D4, NOTE_C4,
  NOTE_G3,  NOTE_G3, NOTE_G4, NOTE_E4,  NOTE_C4, NOTE_B3,   NOTE_A3,
  NOTE_F4,  NOTE_F4, NOTE_E4, NOTE_C4,  NOTE_D4, NOTE_C4 
};

int happy_birthday_tempo[] = { 
  8,8,4,4,4,2,
  8,8,4,4,4,2,
  8,8,4,4,4,4,3,
  8,8,4,4,4,2 
};

/*
 * CHU_ECH_CON
 */
int chu_ech_con_melody[]= {
  NOTE_C3,NOTE_A3,NOTE_G3,NOTE_A3,NOTE_C4,NOTE_A3,NOTE_C4,NOTE_G3,NOTE_F3,NOTE_G3,NOTE_A3,
  NOTE_C3,NOTE_F3,NOTE_D3,NOTE_C3,NOTE_D3,NOTE_F3,NOTE_C3,NOTE_F3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_F3,
  NOTE_G3,NOTE_C4,NOTE_C4,NOTE_D4,NOTE_C4,NOTE_B3,NOTE_G3,NOTE_C4,NOTE_C4,NOTE_D4,NOTE_C4,NOTE_B3,
  NOTE_A3,NOTE_A3,NOTE_C4,NOTE_A3,NOTE_G3,NOTE_D3,NOTE_G3,NOTE_G3,NOTE_A3,NOTE_G3,NOTE_F3
};

int chu_ech_con_tempo[] = { 
  8,8,8,8,8,4,4,8,8,8,8,
  3,8,8,8,8,8,4,4,8,8,8,8,
  2,8,8,8,8,4,4,8,8,8,8,2,
  8,8,8,8,4,4,8,8,8,8,3
};

/*
 * CHAU_LEN_BA
 */
int chau_len_ba_melody[]= {
  NOTE_A3,NOTE_G3,NOTE_F3,NOTE_G3,NOTE_F3,NOTE_G3,NOTE_A3,NOTE_G3,NOTE_G3,NOTE_A3,NOTE_F3,NOTE_A3,NOTE_G3,NOTE_A3,NOTE_F3,
  NOTE_G3,NOTE_A3,NOTE_F3,NOTE_C3,NOTE_C3,NOTE_F3,NOTE_G3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_F3,NOTE_A3,NOTE_G3,NOTE_F3,
  NOTE_G3,NOTE_A3,NOTE_F3,NOTE_C3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_C3,NOTE_C3,NOTE_A3,NOTE_G3,NOTE_F3
};

int chau_len_ba_tempo[] = { 
  4,4,3,8,4,4,2,4,4,4,8,8,4,4,2,
  4,4,4,8,8,4,4,3,8,4,4,4,8,8,
  4,4,3,8,4,4,4,8,8,4,4,2
};

void Melody::sing(int song) {

  _song = song;
  int size, noteDuration, pauseBetweenNotes;

  switch(_song){
    case MARIO_UNDERWORLD_MELODY:
      size = sizeof(mario_underworld_melody) / sizeof(int);
      for (int thisNote = 0; thisNote < size; thisNote++) {
        noteDuration = 1000 / mario_underworld_tempo[thisNote];
        buzz(_pin, mario_underworld_melody[thisNote], noteDuration);
        pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        buzz(_pin, 0, noteDuration);
      }
      break;

    case MARIO_THEME_MELODY:
        size = sizeof(mario_theme_melody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {
          noteDuration = 1000 / mario_theme_tempo[thisNote];
          buzz(_pin, mario_theme_melody[thisNote], noteDuration);
          pauseBetweenNotes = noteDuration * 1.30;
          delay(pauseBetweenNotes);
          buzz(_pin, 0, noteDuration);
        }
        break;

    case HAPPY_BIRTHDAY:
        size = sizeof(happy_birthday_melody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {
          noteDuration = 1000 / happy_birthday_tempo[thisNote];
          buzz(_pin, happy_birthday_melody[thisNote], noteDuration);
          pauseBetweenNotes = noteDuration * 1.30;
          delay(pauseBetweenNotes);
          buzz(_pin, 0, noteDuration);
        }
        break;
    case CHU_ECH_CON:
        size = sizeof(chu_ech_con_melody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {
          noteDuration = 1000 / chu_ech_con_tempo[thisNote];
          buzz(_pin, chu_ech_con_melody[thisNote], noteDuration);
          pauseBetweenNotes = noteDuration * 1.30;
          delay(pauseBetweenNotes);
          buzz(_pin, 0, noteDuration);
        }
        break;
    case CHAU_LEN_BA:
        size = sizeof(chau_len_ba_melody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++) {
          noteDuration = 1000 / chau_len_ba_tempo[thisNote];
          buzz(_pin, chau_len_ba_melody[thisNote], noteDuration);
          pauseBetweenNotes = noteDuration * 1.30;
          delay(pauseBetweenNotes);
          buzz(_pin, 0, noteDuration);
        }
        break;
    default:
        break;
  }
}

void Melody::buzz(int targetPin, long frequency, long length) {

  digitalWrite(13, HIGH); 

  long delayValue = 1000000/ frequency / 2;   // calculate the delay value between transitions
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing

  for (long i = 0; i < numCycles; i++) {
    digitalWrite(targetPin, HIGH);            // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue);            // wait for the calculated delay value
    digitalWrite(targetPin, LOW);             // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue);            // wait again or the calculated delay value
  }

  digitalWrite(13, LOW);
}
