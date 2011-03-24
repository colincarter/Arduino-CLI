#include "WProgram.h"

int ledPin = 13;

void setup(void);
void loop(void);

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}


int main(void) {
	init();
	setup();
	for (;;) {
		loop();
	}
}
