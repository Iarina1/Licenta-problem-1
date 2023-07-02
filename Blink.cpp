// modeled on https://www.arduino.cc/en/Tutorial/Blink

#include <Arduino.h>
#include "Blink.h"

void Blink::setup() {
  // initialize digital pin LED_BUILTIN as an output.
}

void Blink::loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
