int ir = A0;
int ir1 = A1;
void setup() {
  // put your setup code here, to run once:
pinMode(ir,INPUT);
Serial.begin(115200);
}

void loop() {
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

   Serial.println("impedence");
   Serial.println(fin);
delay(500);
}
