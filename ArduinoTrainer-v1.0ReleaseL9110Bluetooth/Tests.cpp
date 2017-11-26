#include "ArduinoTrainer.h"





/*

    Led_Test()

    Enciende alternativamente los LEDs
 
*/
void Led_Test(void) 
{
   
   digitalWrite( LED_ROJO , HIGH );
   delay( LED_DELAY );
   digitalWrite( LED_ROJO , LOW );
   delay( LED_DELAY );
   digitalWrite( LED_AMARILLO , HIGH );
   delay( LED_DELAY );
   digitalWrite( LED_AMARILLO , LOW );
   delay( LED_DELAY );
   digitalWrite( LED_VERDE , HIGH );
   delay( LED_DELAY );
   digitalWrite( LED_VERDE , LOW );
   delay( LED_DELAY );
}



/*

    Switch_Test(void)

    Al pulsar el pulsador, cambia el parpadeo del LED_AZUL
 
*/
void Switch_Test(void)
{
  int ledrojo = 0;
  for(;;)
  {
    
    if( !ledrojo )
    {
      if( Switchd12_esta_pulsado() )  
        Led_Parpadea( 100 , 100 );
      else
        Led_Parpadea( 25 , 100 );
    }
    
    if( Switchd13_esta_pulsado() )
    {
      ledrojo = 1;
      digitalWrite( LED_VERDE , LOW );
      digitalWrite( LED_ROJO , HIGH );
      digitalWrite( LED_ROJO , LOW);
    }
    else 
      ledrojo=0;
    
  } 
}





/*

    Distance_Test(void)

    Imprime por Monitor Serie la distancia
    Enciende LED_AZUL si es inferior a un HORIZONTE
 
*/
void Distance_Test(void) 
{
  int distancia;
  
  for(;;)
  {
    distancia = Distance_StandardTest();
    delay(50);                                //Limite 25 msg Va ok


  if( distancia < 15 )
      digitalWrite( LED_VERDE , HIGH );
    else
      digitalWrite( LED_VERDE , LOW );
     
    
  }
}





void Motor_Test(void) 
{
  int speed=VELOCIDAD;

  Forward_Motor_Left( speed );
  delay(1000);
  Stop_Motor_Left();
  delay(500);
  
  Reverse_Motor_Left( speed );
  delay(1000);
  Stop_Motor_Left();
  delay(500);
  
  Forward_Motor_Right( speed );
  delay(1000);
  Stop_Motor_Right();
  delay(500);
  
  Reverse_Motor_Right( speed );
  delay(1000);
  Stop_Motor_Right();
  delay(500);
  
  Palante( speed );
  delay(1000);
  Stop();
  delay(500);

  Patras( speed );
  delay(1000);
  Stop();
  delay(500);

  Mediavuelta_Left( speed );
  delay(1000);
  Stop();
  delay(500);

  Mediavuelta_Right( speed );
  delay(1000);
  Stop();
  delay(500);

}





/* 
    Led_Parpadea()
        
      Hace parpadear el LED mediante 2 parametros

*/
void Led_Parpadea( int tiempo_ON , int tiempo_OFF ) 
{
   digitalWrite( LED_VERDE , HIGH );
   delay( tiempo_ON );
   digitalWrite( LED_VERDE , LOW );
   delay(tiempo_OFF );
}





/* 
    Funcion:  Switch_esta_pulsado(void)
        
      Devuelve 1 si el pulsador esta siendo presionado, 0 si no
*/

int Switchd12_esta_pulsado(void)
{
  return !digitalRead( SWITCH_D12 );
}





/* 
    Funcion:  Switch_esta_pulsado(void)
        
      Devuelve 1 si el pulsador esta siendo presionado, 0 si no
*/

int Switchd13_esta_pulsado(void)
{
  return !digitalRead( SWITCH_D13 );
}





void Motor_PWM_Test(void)
{
  int speed;
 for( speed=150 ; speed < 255 ; speed+=10)
  {
    Forward_Motor_Right( speed );
    delay(1000);
    Led_Parpadea( 50 , 50 );
  }
 for( speed=150 ; speed < 255 ; speed+=10)
  {
    Forward_Motor_Left( speed );
    delay(1000);
    Led_Parpadea( 50 , 50 );
  }
  Stop();
}

