int area;
int r = 1;
void setup() {
Serial.begin(9600);
}
void loop() {
area = 3.14*r*r;
Serial.print("A circle with radius");
Serial.print(r);
Serial.print("Has a area of");
Serial.print(area);
Serial.println(".");
delay(600);
r=r+.5;



}
