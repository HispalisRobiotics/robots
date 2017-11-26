#include "ArduinoTrainer.h"



#include <Servo.h> 

extern Servo Motor_Left , Motor_Right; 



/* 

    Funciones de Control de Motores
        
*/
void Palante( int velocidad )
{
  Forward_Motor_Left( velocidad );
  Forward_Motor_Right( velocidad );
}



void Patras( int velocidad )
{
  Reverse_Motor_Left( velocidad );
  Reverse_Motor_Right( velocidad );
}



void Stop( void )
{
  Stop_Motor_Left();
  Stop_Motor_Right();
}



void Forward_Giro_Left( int velocidad )
{
  Forward_Motor_Left( velocidad );
}



void Forward_Giro_Right( int velocidad )
{
  Forward_Motor_Right( velocidad );
}



void Reverse_Giro_Left( int velocidad )
{
  Reverse_Motor_Left( velocidad );
}



void Reverse_Giro_Right( int velocidad )
{
  Reverse_Motor_Right( velocidad );  
}



void Mediavuelta_Left(int velocidad )
{
  Forward_Motor_Right( velocidad );
  Reverse_Motor_Left( velocidad );
}



void Mediavuelta_Right( int velocidad )
{
  Reverse_Motor_Right(velocidad );  
  Forward_Motor_Left( velocidad );
}




