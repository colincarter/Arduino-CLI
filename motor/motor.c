#include "WProgram.h"

const int motorPin = 9;

void setup(void);
void loop(void);
void motorOnThenOff();

void motorOnThenOff(void) {
  int onTime = 2500;
  int offTime = 1000;
  digitalWrite(motorPin, HIGH);
  delay(onTime);
  digitalWrite(motorPin, LOW);
  delay(offTime);
}

void setup(void) {
  pinMode(motorPin, OUTPUT);
}

void loop(void) {
  motorOnThenOff();
}

int main(void) {
  init();
  
  setup();
  
  for (int i = 0; i < 3; i++) {
  	loop();
  }
  
  for (;;)
  	;
}

