int speedPin = 5;
int dir1=4;
int dir2 =3;
int mSpeed=   255;
int tiltPin = 23;
int tiltData;
void setup() {
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(tiltPin,INPUT);
  digitalWrite(tiltPin,HIGH);

  Serial.begin(9600);


}

void loop() {
  tiltData = digitalRead(tiltPin);
  if(tiltPin ==0){
    analogWrite(speedPin ,mspeed);

  }
  if(tiltVal ==1){
    analogWrite(speedPin,0);
  }

  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,mSpeed);

}
