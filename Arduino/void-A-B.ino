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
if(!digitalRead(botao_liga)){
  A();
}
else if (!digitalRead(botao_desliga)){
  B();
}
}

  void A (){
    digitalWrite (vm,1);
    digitalWrite(vd,1);
      delay (1000);
    digitalWrite(vm,0);
    digitalWrite(vd,0);
      delay (1000);
  }
  
  void B (){
    digitalWrite(vd,1);
      delay (500);
    digitalWrite(vd,0);
      delay(500);
      
  if(!digitalRead(botao_liga)){
  loop();  
}
      
  else {
    B();
  }
  }
