#include <Arduino.h>

void setup() {
  for (int i = 2; i < 8; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 2; i < 8; i++)
  {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
  for (int i = 7; i > 1; i--)
  {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
}

