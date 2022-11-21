int tiltPin = 2;
int tiltVal;
int LedPin = 23;
void setup() {
  // put your setup code here, to run once:
  pinMode(tiltPin,INPUT);
  digitalWrite(tiltPin,HIGH);
  digitalWrite(LedPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if(tiltVal == 1){
    digitalWrite(LedPin,LOW);

  }
  if(tiltVal == 0){
digitalWrite(LedPin,HIGH);
  }

  // put your main code here, to run repeatedly:

}
