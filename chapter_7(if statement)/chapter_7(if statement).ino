void setup() {
  pinMode(18, INPUT );
  pinMode(A3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
potValue = analogRead(18);
LEDVal = (255./1023.)*potValue;
analogWrite(A3,LEDVal);
Serial.print(LEDVal);


}
