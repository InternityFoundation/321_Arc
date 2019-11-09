int ir = A0;
int ir1 = A1;
float z;
void setup() {
  // put your setup code here, to run once:
pinMode(ir,INPUT);
Serial.begin(9600);
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
//delay(500);
z=0;
}
