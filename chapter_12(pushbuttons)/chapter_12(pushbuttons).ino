int buttonRead;
int dt= 500;
int buttonPin = 13;
int LEDpin = 23;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
  pinMode(buttonPin,INPUT);
}
void loop() {
  buttonRead = digitalRead(buttonPin);
  Serial.println(buttonRead);
  delay(dt);
  if(buttonRead == 1){
    digitalWrite(LEDPin,LOW);
  }   
  if(buttonRead == 0){
    digitalWrite(LEDPin,HIGH);
  }

}
