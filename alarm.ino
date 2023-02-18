/* Ativar e desativar alarme. Alarme ativado, detectar presença, ligar o led e apitar. */

#define sensor 2
#define led 3
#define buzzer 4
#define botao1 5
#define botao2 6

void setup() {
  pinMode(sensor,INPUT);
  pinMode(botao1,INPUT_PULLUP);
  pinMode(botao2,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  if(!digitalRead(botao1)== HIGH){
    ligado ();
  }
  else {
    desligado();}
}
void ligado (){
  if(digitalRead(sensor) == HIGH){
      digitalWrite(led,HIGH);
      digitalWrite(buzzer,HIGH);
        delay(5000);
      digitalWrite(led,LOW);
      digitalWrite(buzzer,LOW);
}
  else{
      digitalWrite(led,LOW);
      digitalWrite(buzzer,LOW);    
}

  if(!digitalRead (botao2)==HIGH){
  desligado ();
  }
  else {
    ligado();
  }
}

void desligado (){
      digitalWrite(led,LOW);
      digitalWrite(buzzer,LOW);
       void loop();
}
