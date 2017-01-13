import Servo.h;
Servo left;
Servo right;
void setup() {
  Servo.attach(9);
  Servo.attach(10);
}

void loop() {
  left.write(122);
  right.write(0);
}
