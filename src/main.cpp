#include <Arduino.h>

/*
Adafruit Arduino - Lesson 13. DC Motor
*/

int motorPin = 3;

void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  analogWrite(motorPin, 125);
}