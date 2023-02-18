#include <Servo.h> 
#define controle A0
Servo teste;
int valor;

void setup (){
  teste.attach (4);
  Serial.begin(9600);
}

void loop (){
  valor = analogRead (controle);
  valor = map(valor,0,1023,0,150);
  Serial.println(valor);
  teste.write(valor);
   delay(100);

}
