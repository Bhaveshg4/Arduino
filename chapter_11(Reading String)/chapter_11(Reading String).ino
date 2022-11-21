
// REMEMBER!!!
/// TO CHANGE THE COLOR TO MIXTURE OF BLUE GREEN AND RED JUST SHIFT THE digitalWrite to analogWrite syntax..



String myColor;
String msg = "What  Color LED?";
int bluePin = 10;
int redPin = 13;
int greenPin = 23;
void setup(){
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(blue,OUTPUT);
}
void loop(){
Serial.println(msg);
while (Serial.available()==0){      
}
myColor = Serial.readString();
if(myColor == "red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}
if(myColor == "blue"){
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(edPin,LOW);
}
if(myColor == "green"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
}
if(myColor == "off"){
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
}






}