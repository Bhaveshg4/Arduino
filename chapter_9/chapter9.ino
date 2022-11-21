//Fun with loops
int j;
int delayTime = 500;
void setup() {
  Serial.begin(9600);
}
void loop() {
  for(j=1;j<=10;j++){
  Serial.println(j);
    delay(delayTime);

  }
  Serial.print("-------------");

}
