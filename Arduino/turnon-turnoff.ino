#include <Servo.h>

Servo base;
Servo garra;
Servo elevador;
Servo extensor;

int pbase;
int pgarra;
int pelevador;
int pextensor;

#define liga 8
#define desliga 9

void setup() {
  
  base.attach(4);
  garra.attach(5);
  elevador.attach(6);
  extensor.attach(7);
  pinMode(liga, INPUT_PULLUP);
  pinMode(desliga, INPUT_PULLUP);
  
}

void loop(){
  if(!digitalRead(liga)){
    ligado();
  }
  else{
    descanso();
  }
}

void descanso(){
  pbase=90;
  base.write(pbase);
  delay(1000);

  pelevador=90;
  elevador.write(pelevador);
  delay(1000);

  pgarra = 50;
  garra.write(pgarra);
  delay(1000);

  if(!digitalRead(liga)){
    ligado();
  }
}
void ligado() {
  pbase=90;
  base.write(pbase);
    delay (2000);

  pbase = 170;
  base.write(pbase);
    delay (2000);  

  pgarra = 30;
  garra.write(pgarra);  
  delay(3000);
  
  pelevador = 135;
  elevador.write(pelevador);
    delay (2000);

  pgarra = 80;
  garra.write(pgarra);  
  delay(3000);

  pelevador = 90;
  elevador.write(pelevador);
  delay(3000);

  pbase = 30;
  base.write(pbase);
  delay(2000);

  pelevador = 120;
  elevador.write(pelevador);
  delay(2000);

  pgarra = 30;
  garra.write(pgarra);
  delay(1000);

  pelevador=90;
  elevador.write(pelevador);
  delay(2000);

  if(!digitalRead(desliga)){
    descanso();
  }
    else{
      ligado();
    }
 


}
