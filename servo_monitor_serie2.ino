#include <Servo.h>
#define pot A0
Servo myservo;  


int val=0;   

void setup() {
  myservo.attach(9); // pin PWM de servomotor
   Serial.begin(9600); // inicializacion de monitor serial
}

void loop() {
  val = analogRead(pot);  // lectura de potenciometro          
  val = map(val, 0, 1023, 0, 180); //traduccion de valor de potenciometro a valor de servomotor
  myservo.write(val);   //ejecutamos la orden de movimiento del servo con el valor traducido               
              
  if(Serial.available()) {
  String estado = Serial.readString();
   if(estado = "ESQUERDA") {
    myservo.write(90); 
   }
     else if(estado == "DIAGONAL ESQUERDA") {
    myservo.write(45); 
   }
   else if(estado == "CENTRO") {
   myservo.write(0); 
   }
   else if(estado == " DIAGONAL DEREITA") {
   myservo.write(-90); 
   }
   else if(estado == "DEREITA") {
   myservo.write(180); 
   }
   else {
   myservo.write(0); 
   }
   delay(15);
 }
}

/*

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
*/
