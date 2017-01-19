#include <Servo.h>;
Servo left;
Servo right;
void setup() {
  left.attach(9);
  right.attach(10);
}

void loop() {
  left.write(122);
  right.write(0);
}
