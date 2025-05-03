#include <Servo.h>
#define pot A0
Servo myservo;  


int val;   

void setup() {
  myservo.attach(9); // pin PWM de servomotor
}

void loop() {
  val = analogRead(pot);  // lectura de potenciometro          
  val = map(val, 0, 1023, 0, 180); //traduccion de valor de potenciometro a valor de servomotor
  myservo.write(val);   //ejecutamos la orden de movimiento del servo con el valor traducido               
  delay(15);                          
}
