// C++ code
//

#define PULS 8
#define ARRIBA_PRIM 12
#define ABAJO_PRIM 11
#define ARRIBA_SEG 10
#define ABAJO_SEG 9

bool acciona =0; // variable para cuando se pulsa el boton de funcionamiento
int estado =1 ;// variable de estado funcionamiento 



void setup() {
  pinMode(PULS, INPUT);
  pinMode(ARRIBA_PRIM, OUTPUT);
  pinMode(ABAJO_PRIM, OUTPUT);
  pinMode(ARRIBA_SEG, OUTPUT);
  pinMode(ABAJO_SEG, OUTPUT);
 
 }

void loop() {
  
  acciona = digitalRead(PULS);
 
  delay(20);
  
  if(acciona){
    
    estado=(estado+1)%4; //unha vez que se acciona o pulsador de funcionamento cambiase o estado no que estaba
    
   
       while(digitalRead(PULS)){
      delay(10);
         
       }
  }
 
      if (estado==0){// pasa a subir
        digitalWrite(ARRIBA_PRIM, HIGH);
        digitalWrite(ARRIBA_SEG, HIGH);
    digitalWrite(ABAJO_PRIM, LOW);
         digitalWrite(ABAJO_SEG, LOW);
        
      }

      if (estado==1||estado==3){// para
         digitalWrite(ARRIBA_PRIM, LOW);
  		digitalWrite(ARRIBA_SEG, LOW);
        digitalWrite(ABAJO_PRIM, LOW);
         digitalWrite(ABAJO_SEG, LOW);
      }
 
  
 	 if (estado==2){// pasa a subida
     digitalWrite(ARRIBA_PRIM, LOW);
  		digitalWrite(ARRIBA_SEG, LOW);
        digitalWrite(ABAJO_PRIM, HIGH);
         digitalWrite(ABAJO_SEG, HIGH);
    }
  
}
  /*else{
   digitalWrite(ARRIBA, LOW);
    digitalWrite(ABAJO, LOW);
  }
}*/
    
