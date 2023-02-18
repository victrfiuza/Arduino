#include<Servo.h>
#define pinoPot1 A0
Servo teste;
int pos1;
void setup() {
teste.attach(4);
Serial.begin(9600);
  
}

void loop() {
 pos1=analogRead (pinoPot1);
pos1=map(pos1,0,1023,180,115);
Serial.println(pos1);
teste.write(pos1);
delay(15);
}
