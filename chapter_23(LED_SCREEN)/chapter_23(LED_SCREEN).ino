#include <LiquidCrystal.h>
int rs =7;
int en= 8;
int d4= 9;
int d5= 10;
int d6= 11;
int d7= 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  lcd.begin(16,2)            // 16 pins , 2 columns
}
void loop() {
  lcd.setCursor(0,0);
  lcd.print("Hello World!");
  delay(1000);
  lcd.setCursor(0,1);  
  lcd.print("My name is Bhavesh");
  delay(1000);
  lcd.clear();
}
