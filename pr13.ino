// C++ code
//Nesta practica imos incorporar un pulsador,cando o pulsador se preme o programa deixa de funcionar , cando non se pulsa o programa sigue con total normalidade
// practica feita por PABLO SEGADE CURROS


#define L_VERDE  13
#define L_ROJO 12
#define RELE    11
#define PULS    10


int tiempo = 4000;
bool puls = 0;


void setup()
{
  pinMode(L_VERDE, OUTPUT);
  pinMode(L_ROJO, OUTPUT);
  pinMode(RELE, OUTPUT);
  pinMode(PULS, INPUT);
}

void loop()
{
  puls = digitalRead(PULS);
  if(puls == false)
  {
  leds();
  }
}


void leds()
{
  digitalWrite(L_VERDE, HIGH);//encende o led verde
  delay(tiempo); 
  digitalWrite(L_VERDE, LOW);//apaga o led verde
  delay(tiempo/2); 
  digitalWrite(L_ROJO, HIGH);//encende o led vermello
  digitalWrite(RELE, HIGH);//excita o rele que encende a bombilla
  delay(tiempo); 
  digitalWrite(L_ROJO, LOW);//apaga o led vermello
  digitalWrite(RELE, LOW);//apaga o rele que encende a bombilla
  delay(tiempo/2); 
}
  
