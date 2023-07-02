#include <Arduino.h>
#include "Blink.h"

void Blink::setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void Blink::loop() {
  digitalWrite(LED_BUILTIN, LOW);
}
