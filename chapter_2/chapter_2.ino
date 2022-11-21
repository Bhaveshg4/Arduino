int mypin;
int del = 900;
int dell = 100;
void setup() {
  printf("Enter a number");
scanf("%d",&mypin);
  
digitalPin(mypin,OUTPUT);
}

void loop() {
  digitalWrite(mypin,HIGH);
  delay(del);
digitalWrite(mypin,LOW);
delay(dell);


}
