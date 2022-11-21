int buttonPin = 2;
int buttonValue;
int dt = 100;

void setup() {
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  buttonValue= digitalRead(buttonPin);
  Serial.print("Your Button is:");
  Serial.println(buttonValue);
  delay(dt);

}
