#include <WProgram.h>
#include <Servo.h>

Servo servo;

int main(void) {
	int pos = 0;
	
	init();
	servo.attach(9);
	for (;;) {
		for (pos = 0; pos < 180; pos++) {	
			servo.write(pos);
			delay(15);
		}
		for (pos = 180; pos >= 1; pos--) {	
			servo.write(pos);
			delay(15);
		}
	}
	
	return 0;
}

