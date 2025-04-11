// C++ code
//

#define PULS 10
#define ARRIBA 11
#define ABAJO 12

int tRecorrido = 7000;
bool estado = false;
int contador = -1;


void setup() {
  pinMode(PULS, INPUT);
  pinMode(ARRIBA, OUTPUT);
  pinMode(ABAJO, OUTPUT);
 
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(PULS)) {
    estado = !estado;
    contador = 100;
    while(digitalRead(PULS)){
      delay(10);
    }
  }
  //estado = digitalRead(PULS);
 
  if(contador > 0) {
      if(estado == true) {
    digitalWrite(ARRIBA, HIGH);
    digitalWrite(ABAJO, LOW);
     
  }
  else {
    digitalWrite(ARRIBA, LOW);
    digitalWrite(ABAJO, HIGH);
  }
  delay(70);
  contador -= 1;
  Serial.println(contador);
  }
 
  else {
    digitalWrite(ARRIBA, LOW);
    digitalWrite(ABAJO, LOW);
  }
}
