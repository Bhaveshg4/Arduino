#include <Servo.h>
int servoPin = 9;
int servoPos = 0;
Servo myServo;
void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  Serial.println("Please describe angle..")
  whlie(serial.available()==0){

  }
  servoPos = Serial.parseInt();
  //myServo.write(servoPos);//HERE SERVO MAKE ITSELF TO 0 DEGREES
  // put your main code here, to run repeatedly:
}
myServo.write(servoPos);
