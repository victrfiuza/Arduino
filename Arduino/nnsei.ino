#define vermelho 2
#define amarelo 3
#define verde 4
#define ldrval A0
int ldr;

void setup() {
pinMode(vermelho,OUTPUT);
pinMode(amarelo,OUTPUT);
pinMode(verde,OUTPUT);
Serial.begin (9600);
}

void loop() {
  ldr = analogRead(ldrval);
  Serial.println (ldr);
}
