

// include the library code:
#include <LiquidCrystal.h>
float a;
float Value;
float z;
int t;
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(A0,INPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Oncologer");
delay(2000);

}

void loop() {
  // Turn off the display:
for(t=0;t>1000;t++){
a=analogRead(A0);
z=z+a;
delay(10);
}
z=z/1000;
  if(z>Value){
lcd.clear();
  // Turn on the display:
  lcd.print("good");
  delay(500);
    
    }
else{
lcd.clear();
  // Turn on the display:
  lcd.print("Bad");
  delay(500);
    
    }

  
}
