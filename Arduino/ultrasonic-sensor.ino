#define echo 9
#define trig 8
#define alarme 3
#define ledverde 10
#define ledamarelo 11
#define ledvermelho 12

unsigned long tempo; 
double distancia;

void setup() {
  pinMode (trig,OUTPUT);
  pinMode (echo,INPUT);
  pinMode (alarme,OUTPUT);
  pinMode (ledverde,OUTPUT);
  pinMode (ledamarelo,OUTPUT);
  pinMode (ledvermelho,OUTPUT);
  Serial.begin (9600);
  digitalWrite (trig,LOW);
}

void loop() {
  digitalWrite (trig,HIGH);
  delayMicroseconds (10);
  digitalWrite(trig,LOW);
  tempo=pulseIn(echo,HIGH);
  distancia= tempo/58;
  Serial.println(distancia);
  delay (500);
   if ((distancia <=15) && (distancia >13)){ //ligar o verde
    digitalWrite (ledverde,HIGH);
    digitalWrite(alarme,1); 
    delay(100);
    digitalWrite(alarme,0);
    delay(100);   
  }
  else if ((distancia <=13) && (distancia >=11)){ // ligar amarelo
    digitalWrite (ledverde,HIGH);
    digitalWrite (ledamarelo,HIGH);
    digitalWrite(alarme,1);
    delay(30);
    digitalWrite(alarme,0);
    delay(30);
  }
  else if ((distancia <=11) && (distancia >=10)){ // 
    digitalWrite (ledverde,HIGH);
    digitalWrite (ledamarelo,HIGH);
    digitalWrite (ledvermelho,HIGH);
    digitalWrite(alarme,1);
    delay(30);
    digitalWrite(alarme,0);
    delay(30);
  }
  
  else{
    digitalWrite(alarme,0);
    digitalWrite (ledverde,LOW);
    digitalWrite (ledamarelo,LOW);
    digitalWrite (ledvermelho,LOW);
  }
  if(distancia<=10) {
    digitalWrite(alarme,1);
    digitalWrite (ledverde,HIGH);
    digitalWrite (ledamarelo,HIGH);
    digitalWrite (ledvermelho,HIGH);    
  }
}
