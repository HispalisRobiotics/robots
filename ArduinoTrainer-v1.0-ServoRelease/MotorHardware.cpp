/*
  
 Interface con hardware
  
*/
/*

    Interface con Hardware 
    Estas son las funciones a modificar en el caso de tener
    otro tipo de motores, por ejemplo servos de rotacion continua
  
*/
#include "ArduinoTrainer.h"



extern Servo Motor_Left , Motor_Right; 




void Forward_Motor_Left( int velocidad )
{
  Motor_Left.write( 88+ velocidad );
}



void Reverse_Motor_Left( int velocidad )
{
  Motor_Left.write( 88 - velocidad );
}



void Forward_Motor_Right( int velocidad )
{
  Motor_Right.write( 88 + velocidad );
}
  


void Reverse_Motor_Right( int velocidad )
{
   Motor_Right.write( 88 - velocidad );
}



void Motor_PWM_Test(void)
{
  int speed;
 for( speed=125 ; speed < 265 ; speed+=10)
  {
    Forward_Motor_Right( speed );
    delay(1000);
    Led_Parpadea( 50 , 50 );
  }
 for( speed=125 ; speed < 265 ; speed+=10)
  {
    Forward_Motor_Left( speed );
    delay(1000);
    Led_Parpadea( 50 , 50 );
  }
  Stop();
}



void Stop_Motor_Left( void )
{
  Motor_Left.write( 88);
}



void Stop_Motor_Right( void )
{
  Motor_Right.write( 89);
}

