#include <Servo.h>
Servo Xservo;
Servo Yservo;
int Xpin= A0;
int Ypin = A1;
int XSpin = 9;
int YSpin = 10;
int bussPin = 7;
int WVx;
int WVy;
int Xval;
int Yval;
int Sval;
int dt = 200;
void setup() {
Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);
pinMode(XSpin,OUTPUT);
pinMode(YSpin,OUTPUT);
pinMode(buzzPin,OUTPUT);
digitalWrite(Spin,HIGH);
Xservo.attach(Xpin);
Yservo.attach(Ypin);
}

void loop() {
  Xval = analogRead(Xpin);
  WVx = (180./1023.)*Xval;
  WVx = (180./1023.)*Yval;
  Sval = digitalRead(Spin);
  Xservo.write(WVx);
  Yservo.write(WVy);
  delay(dt);
  Serial.print("X Value= ");
  Serial.print(Xval);
  Serial.print("Y value =");
  Serial.print(Yval);
  Serial.print("Switch state is");
  Serial.println(Sval);
}
