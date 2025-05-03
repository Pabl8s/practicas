
#include <Servo.h>


#define CTRL 6
// pin de control do servo

Servo motor;
int veloc = 50; // velocidad de movimiento

void setup() {
  motor.attach(CTRL); // inicializacion de pin que usamos para señal 
  Serial.begin(9600); // inicializacion de monitor serial
  motor.write(0); // posicionamiento inicial de servo
}

void loop() {
 
 if(Serial.available()) {
  String estado = Serial.readString();
   if(estado = "ESQUERDA") {
    motor.write(90); 
   }
     else if(estado == "DIAGONAL ESQUERDA") {
    motor.write(45); 
   }
   else if(estado == "CENTRO") {
    motor.write(0); 
   }
   else if(estado == " DIAGONAL DEREITA") {
    motor.write(-90); 
   }
   else if(estado == "DEREITA") {
    motor.write(180); 
   }
   else {
    motor.write(0); 
   }
   delay(25);
 }
}
