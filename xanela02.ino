// C++ code
//

#define PULS 10
#define PULSP1 9
#define PULSP2 8
#define ARRIBA 11
#define ABAJO 12

bool acciona =0; // variable para cuando se pulsa el boton de funcionamiento
bool paro1=0;// variable para cuando se acciona el final de carrera abajo
bool paro2=0;// variable para cuando se acciona el final de carrera arriba
int estado =1 ;// variable de estado funcionamiento 



void setup() {
  pinMode(PULS, INPUT);
  pinMode(PULSP1, INPUT);
  pinMode(PULSP2,INPUT);
  pinMode(ARRIBA, OUTPUT);
  pinMode(ABAJO, OUTPUT);
 
 }

void loop() {
  
  acciona = digitalRead(PULS);
  paro1 =digitalRead (PULSP1);
  paro2 = digitalRead(PULSP2);
  delay(20);
  
  if(acciona){
    
    estado=(estado+1)%4; //unha vez que se acciona o pulsador de funcionamento cambiase o estado no que estaba
    
   
       while(digitalRead(PULS)){
      delay(10);
         
       }
  }
  if (paro1 && estado == 2 ){// cando se acciona o final de carrera inferior e o estado no que estaba era baixar parase
  estado=3;
  }
   if (paro2 && estado == 0){ // cando se acciona o final de carrera superior e o estado no que estaba era subir parase
  estado=1;
  }
      if (estado==0){// pasa a subir
        digitalWrite(ARRIBA, HIGH);
    digitalWrite(ABAJO, LOW);
      }

      if (estado==1||estado==3){// para
         digitalWrite(ARRIBA, LOW);
    digitalWrite(ABAJO, LOW);
      }
 	 if (estado==2){// pasa a subida
     digitalWrite(ARRIBA, LOW);
    digitalWrite(ABAJO, HIGH);
    }
}
  /*else{
   digitalWrite(ARRIBA, LOW);
    digitalWrite(ABAJO, LOW);
  }
}*/
    
