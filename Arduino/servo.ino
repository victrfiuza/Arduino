#include <Servo.h>
#define pinoPot1 A0
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
  /*pos1 = analogRead(pinoPot1); */
 pos1=map (pos1,0,1023,10,140);
  Serial.println(pos1);
  braco.write(pos1);
  delay (5000);

  pos2=map (pos2,0,1023,30,110);
  Serial.println(pos2);
  garra.write(pos2);
  delay(5000);
  pos2=map (pos2,0,1023,115,140);
  Serial.println(pos2);
  garra.write(pos2);
  delay(5000);
  
  pos1=map (pos1,0,1023,140,10);
  Serial.println(pos1);
  braco.write(pos1); 
  delay(5000);
  
  pos4=map (pos4,0,1023,20,160);
  Serial.println(pos4);
  base.write(pos4);
  delay(5000); 
  pos4=map (pos4,0,1023,160,80);
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
