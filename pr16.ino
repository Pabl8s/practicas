/* 
 *  Programa para simular o comportamente das portas loxicas dunha practica previa(PR7)
 *  O programa activa unha saida luminosa (LED ou lampada) en funcion de 3 entradas de interruptores
 *  de maneira que cumpla a funcion dixital: 

 *  f= not a*b*not c + not a *b*c +a*not b *c + a *b*c

 *  Programa feito por PABLO SEGADE CURROS
  */


#define A    10
#define B    9
#define C    8
#define LAMP 11



bool a = 0;// variable onde gardo o resultado da lectura do pin 10
bool b = 0;// variable onde gardo o resultado da lectura do pin 9
bool c = 0;// variable onde gardo o resultado da lectura do pin 8
bool condition = 0;

void setup()
{
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(LAMP, OUTPUT);
 
}

void loop()
{
  a = digitalRead(A);
  b = digitalRead(B);
  c = digitalRead(C);
  
  bool condition1 = !a && b && !c ;
  bool condition2 = !a && b && c ;
  bool condition3 = a && !b && c ;
  bool condition4 = a && b && c;
  if(condition1){
    digitalWrite(LAMP,HIGH);
  }
  else if(condition2){
    digitalWrite(LAMP,HIGH);
  }
  else if(condition3){
    digitalWrite(LAMP,HIGH);
  }
  else if(condition4){
    digitalWrite(LAMP,HIGH);
  }
  
  else{
        digitalWrite(LAMP,LOW);

  }
}
