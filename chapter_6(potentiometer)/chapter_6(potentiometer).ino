int myVoltage= A2;
int readVal;
float V2;
int delayTime = 250;
void setup() {
  Serial.begin(9600);


}

void loop() {
  readVal = analogRead(myVoltage);
  V2 = (5./1023.)*readVal;
delay(delayTime);

}
