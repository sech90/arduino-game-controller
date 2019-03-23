#include <Gamepad.h>

int PIN_MIN = 1;
int PIN_MAX = 16;

Gamepad gp;

void setup() {
  for(int pin=PIN_MIN; pin<=PIN_MAX; pin++){
    pinMode(pin, INPUT_PULLUP);
  }

  for(int i=0; i<=PIN_MAX; i++)
    gp.setButtonState(i, 0);
}

void loop() {
  for(int pin=PIN_MIN; pin<=PIN_MAX; pin++){
    bool pinState = digitalRead(pin);
    gp.setButtonState(pin, !pinState);
  }
}
