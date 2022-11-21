int speedpin =5;
int dir1 =4;
int dir2 = 3;
int mSpeed = 255;
int jPin =A1;
int jVal;
void setup() {
Serial.begin(9600);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(jPin,INPUT);

  // put your setup code here, to run once:

}

void loop() {
  jValue = analogRead(jPin);
  Serial.println(jVal);
  if(jVal<512){
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    mSpeed = -255./512.*jVal+255.;
    analogWrite(speedPin,mSpeed);

  }
  if(jVal>=512){
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    mSpeed = (25./512.)*jVal-255.;
  }

  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,mSpeed);
  

}
