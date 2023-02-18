#include <Servo.h>
Servo braco;
Servo garra;
Servo braco2;
Servo base;

int pos1;
int pos2;
int pos3;
int pos4;

void setup() {
braco.attach(4);
garra.attach(5);
braco2.attach(6);
base.attach(7);


Serial.begin(9600);
}

void loop() {

  pos4=90;
  base.write(pos4);
  delay(1000);

  pos4=170;
  base.write(pos4);
  delay(1000);
  
  pos3=135;
  braco2.write(pos3);
  delay (3000);

  pos2=30;
  garra.write(pos2);
  delay(5000);
  
  pos2= 80;
  garra.write(pos2);
  delay(5000);
  
  pos1= 15;
  braco.write(pos1);
  delay (1000);
  
  pos3=90;
  braco2.write(pos3);
  delay (3000);
  
  pos4=20;
  base.write(pos4);
  delay(4000);

  pos3=130;
  braco2.write(pos3);
  delay (3000);
  
  pos2=30;
  garra.write(pos2);
  delay(5000);

  pos1= 15;
  braco.write(pos1);
  delay (1000);
  
  pos3=90;
  braco2.write(pos3);
  delay (3000);
  
}
/*
  pos4=90;
  base.write(pos4);
  delay(1000); 
  
  pos1= 90;
  braco.write(pos1);
  delay (5000);

  pos4=20;
  base.write(pos4);
  delay(5000); 

  pos1= 10;
  braco.write(pos1);
  delay (5000);

  pos2=30;
  garra.write(pos2);
  delay(5000);
  
  pos2= 110;
  garra.write(pos2);
  delay(5000);

  pos1= 140;
  braco.write(pos1); 
  delay(5000);

  pos1= 30;
  braco.write(pos1);
  delay (5000);

  pos2=30;
  garra.write(pos2);
  delay(5000);

  pos1= 140;
  braco.write(pos1); 
  delay(5000);
  
  pos4=160;
  Serial.println(pos4);
  base.write(pos4);
  delay(5000); 
  
  
}

/*  Garra = pos1=map (pos1,0,1023,170,110);
 *  Extensor = pos1=map (pos1,0,1023,140,90);
 *  Base = pos1=map (pos1,0,1023,10,170);
 *  Elevador= pos1=map (pos1,0,1023,10,170);
 *  
 */
