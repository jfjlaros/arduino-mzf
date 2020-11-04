#include "methods.h"


void setup(void) {
  pinMode(LED_BUILTIN, OUTPUT);
  setspeed(0);
}

void loop(void) {
  byte* file = (byte*)"hello\0";

  trans(file);
}
