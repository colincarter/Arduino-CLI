#include "WProgram.h"

#define LED_PIN 13

void loop(void);
extern void setup(void);

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(4000);
}


int main(void) {
  init();
  setup();
  for (;;) {
    loop();
  }
}
