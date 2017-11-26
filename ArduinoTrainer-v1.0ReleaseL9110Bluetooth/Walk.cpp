#include "ArduinoTrainer.h"





void Walk_Test( void )
{
  int i;

  for( i=0 ;i<5 ; i++ )
    Led_Parpadea( 250 , 250 );
  
  while( !Switchd12_esta_pulsado() )
  ;
  delay(1000);  

  
  Palante(VELOCIDAD);
  Hasta_que_lleguesa(15);
  
  Stop();
  
  for( i=0 ;i<10 ; i++ )
    Led_Parpadea( 50 , 50 );
  while( !Switchd12_esta_pulsado() )
    ;
  delay(500);
}





void Hasta_que_lleguesa( int horizonte)
{
  int distancia=-1000;
  do
  {
    distancia = Distance_PingTest();
  } while( distancia >= horizonte );
}
