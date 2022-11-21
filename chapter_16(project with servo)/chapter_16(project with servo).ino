#include <Servo.h>
int lightVal;
int lightPin=A4;
int dt = 250;
int angle;
int servoPin = 9;
Servo myServo;
void setup() {
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
  pinMOde(servoPin,OUTPUT);
  myServo.attach(servoPin)
}
void loop() {
ligtVal = analogRead(lightPin);
Serial.println(lightPin);
delay(dt);
angle = (-16./63.)*lightVal+16.*780./63.
myServo.write(angle);


  

}
