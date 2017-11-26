#include "ArduinoTrainer.h"

/* 
    Funcion:  Distance_StandardTest()
        
      Devuelve en cm la distancia del sensor HCSR04 al objeto más cercano

      Funcionamiento:
      
        1)    Lanzamos un pulso de señal cuadrado. Para ello el pin TRIGGER 
                a) Lo ponemos a LOW, y esperamos un tiempo a que se estabilice ( por si estaba en nivel HIGH )
                b) Lo ponemos a HIGH, y esperamos un tiempo
                c) Lo ponemos a LOW again
        2)  El sensor devuelve un pulso de entrada en el pin ECHO, que es el tiempo de ida y vuelta del sonido
  
        3)  Con una formula lo convertimos a cm.
*/
int Distance_StandardTest(void) 
{
  long duracion, distancia;

  //  Pulso en TRIGGER
  digitalWrite(HCSR04_TRIGGER , LOW);
  delayMicroseconds(5);           
  digitalWrite(HCSR04_TRIGGER, HIGH);
  delayMicroseconds(5);          
  digitalWrite(HCSR04_TRIGGER, LOW);
  
  //  Pulso de ECHO
  duracion = pulseIn(HCSR04_ECHO , HIGH) ;    

  //  Conversion a int. Podemos convertir a float ...
  distancia = (int) (duracion / 2 / 29.1 ) ;
  
  Serial.println( "Distancia ... "+ String(distancia) + " cm.") ;
  
  return distancia;
}
