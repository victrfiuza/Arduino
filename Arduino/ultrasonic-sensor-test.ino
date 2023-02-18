#define sensor 2
#define led 3



void setup() {
  pinMode (led,OUTPUT);
  pinMode (sensor,INPUT_PULLUP);

}

void loop() {
  
   if (!digitalRead(sensor)){
    digitalWrite(led,1);
   }
   else {
    digitalWrite(led,0);
   }
}
