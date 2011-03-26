#include "WProgram.h"

//#define LED_PIN  13

int main(void) {
  unsigned char LED_PIN = 13;
  init();
  pinMode(LED_PIN, OUTPUT);
  for (;;) {
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(4000);
  }
}
