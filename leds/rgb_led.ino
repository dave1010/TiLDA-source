#include "lights.h"

Lights lights;

void setup() {
}

void loop() {
  Colour c;
  c.red=0;
  c.green=0;
  c.blue=0;
  lights.set(LED_LEFT, c);
}