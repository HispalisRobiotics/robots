#include "ArduinoTrainer.h"

void LineSensor_Test( void )
{
  int i[4];
  int ind;

  for(;;)
  { 
    i[0]= analogRead( A3 );
    i[1]= analogRead( A2 );
    i[2]= analogRead( A1 );
    i[3]= analogRead( A0 );

    Serial.print("Lecturas ...");
    for( ind =0; ind <4 ; ind++)
      Serial.print("\t"+String( i[ind] ));
    Serial.println("");
    delay(500);
  }
}

