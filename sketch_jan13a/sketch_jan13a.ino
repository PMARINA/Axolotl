#include <Servo.h>;
#include <SharpIR.h>;
Servo left;
Servo right;

SharpIR leftSensor(A5, 25, 95, 20150);
SharpIR frontSensor(A4, 25, 95, 20150);

void setup() {
  left.attach(9);
  right.attach(10);
  Serial.begin(9600);
}

void loop() {

  sensorTestingLoop();
}

void sensorTestingLoop(){
  //left.write(110);
  //right.write(0);
  left.write(90);
  right.write(90);
  Serial.print("Left: ");
  Serial.print(leftSensor.distance());
  Serial.print("    Front: ");
  Serial.println(frontSensor.distance());
  delay(500);
}
