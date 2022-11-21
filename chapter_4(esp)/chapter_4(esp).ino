
// To determinr the voltage at a point A3 by using Serial monitor and analog read
int readPin= A3;
int readVal;
floatV2 = 0;
int delayTime= 500;

void setup(){
  pinMode(readPin,INPUT);
  Serial.begin(9600);

}
void loop(){
  readVal = analogRead(readPin);
  V2 = (5./1023.)*readVal;
  Serial.print(V2);
delay(delayTime);


  
}

