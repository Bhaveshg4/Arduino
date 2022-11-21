int yelloPin = 6;
int redPin = 9;
int yellowTime = 500;
int redTime = 500;
int yellowBlink = 5;
int redBlink = 3;
int j,i;
void setup() {
pinMode(yellowPin, OUTPUT);
pinMode(redPin,OUTPUT);
Serial.begin(9600);
}
void loop() {
for(i=0;i<=yellowBlink,i = i+1){
  digitalWrite(yellowPin,HIGH);
  delay(yellowBlink);
  digitalWrite(yellowPin,LOW);
  delay(yellowBlink);
}
for(j=1;j<=redBlink;j=j+1){
digitalWrite(redPin,HIGH);
delay(redTime);
digitalWrite(redPin,LOW);
delay(redTime);

}
  

}
