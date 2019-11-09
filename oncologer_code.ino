int ir = A0;
int ir1 = A1;
float z;
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
pinMode(ir,INPUT);
Serial.begin(9600);
lcd.begin(16, 2);
}

void loop() {


  for(int t=0;t<1000;t++){
   float ira = (48.828*(analogRead(ir)))-3;
   float ir1a = (48.828*(analogRead(ir1)))-3;
   float irb = ira/0.03;
   float ir1b = ir1a/0.03;
   float fin = ir1a-ira;
  // put your main code here, to run repeatedly:
      //Serial.println("ira");
  // Serial.println(ir);
      //Serial.println(irb);
      //Serial.println("ir1a");
   //Serial.println(ir1);
      //Serial.println(ir1b);
  z=z+fin;
  delay(1);
  }
  z=z/1000;
   Serial.println("impedence");
   Serial.println(z);
   lcd.setCursor(0, 0);
  // lcd.print(millis() / 1000);
  lcd.clear();
   lcd.print("Impedance-");
   lcd.setCursor(0, 1);
   lcd.print(z);
   lcd.print(" kilo ohm");
//delay(500);
z=0;

}
