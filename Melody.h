/*
 * Project name: 
 * Description: 
 * 
 * Created on Mon Sep 25 2017
 * Copyright (c) 2017 ChipFC Team
 *      www.chipfc.com
 */

#ifndef Melody_h
#define Melody_h

class Melody
{
  public:
    Melody(int pin);
    void sing(int song);
  private:
    int _song;
    int _pin;
    void buzz(int targetPin, long frequency, long length);
};

#endif