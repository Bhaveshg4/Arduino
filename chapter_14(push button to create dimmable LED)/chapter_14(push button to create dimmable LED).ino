
// Controlling brightness,dullness using digitalSwitches
int LEDPin =3;
int buttonVal1;
int buttonVal2;
int LEDbright =0;
int dt = 250;
int bussPin = 23;

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin1,INPUT);
pinMode(buuttonPin2,INPUT);
pinMode(LEDPin,OUTPUT);
pinMode(bussPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
buttonVal1 = digitalRead(buttonPin1);
buttonVal2 = digitalRead(buttonPin2);
Serial.print("Button 1 =");
Serial.print(buttonVal2);
delay(dt);
if(buttonVal1==0){
LEDbright=LEDbriht+5;
}
if(buttonVal2 ==0){
LED  
bright = LEDbright-5;
}
if(LEDbright<0){
  LEDbright = 0;

}
analogWrite(LEDPin,LEDbright);
  // put your main code here, to run repeatedly:

}
