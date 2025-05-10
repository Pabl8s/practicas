

#include <Servo.h>
#define pot1 A0
#define pot2 A1
#define pot3 A2

int acimut = 0;
int brazo = 0;
int pinza = 0;

Servo servo_9;
Servo servo_6;
Servo servo_5;

void setup()
{
  servo_9.attach(9, 500, 2500);
  servo_6.attach(6, 500, 2500);
  servo_5.attach(5, 500, 2500);
}

void loop()
{
  acimut = analogRead(pot1);  // lectura de potenciometro          
  acimut = map(acimut, 0, 1023, 0, 180); //traduccion de valor de potenciometro a valor de servomotor
  brazo = analogRead(pot2);  // lectura de potenciometro          
  brazo = map(brazo, 0, 1023, 0, 180); //traduccion de valor de potenciometro a valor de servomotor
  pinza = analogRead(pot3);  // lectura de potenciometro          
  pinza = map(pinza, 0, 1023, 0, 180); //traduccion de valor de potenciometro a valor de servomotor
  
  servo_9.write(acimut);
  servo_6.write(brazo);
  servo_5.write(pinza);
 
    delay(15); 
  }
