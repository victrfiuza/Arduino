#define vm 2
#define vd 3
#define botao_liga 4
#define botao_desliga 5
long tempo_anterior;

void setup() {
  
  pinMode( vd, OUTPUT);
  pinMode( vm, OUTPUT);
  pinMode( botao_liga, INPUT_PULLUP);
  pinMode( botao_desliga, INPUT_PULLUP);
  Serial.begin (9600);
}

void loop() { 
  
if (millis() >= tempo_anterior+6000){
  tempo_anterior = millis ();
  digitalWrite(vm,!digitalRead(vm));
  Serial.println(tempo_anterior);
  }

  if(!digitalRead (botao_liga)){
    digitalWrite(vd,HIGH);
  }
  if(!digitalRead (botao_desliga)){
    digitalWrite(vd,LOW);
  }
  }

  /* 
   digitalWrite(vm,1);
   delay(6000);
   digitalWrite(vm,0);
   delay(6000);

   if(!digitalRead (botao_liga)){
    digitalWrite(vd,HIGH);
  }
   if(!digitalRead (botao_desliga)){
    digitalWrite(vd,LOW);
  }
   
   *  
   */

  
