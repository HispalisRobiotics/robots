/*
  
 Interface con hardware
  

    Interface con Hardware 
    Estas son las funciones a modificar en el caso de tener
    otro tipo de motores, por ejemplo servos de rotacion continua

*/
#include "ArduinoTrainer.h"
#define MOTOR_DCHO_OFFSET   -20

void Stop_Motor_Left( void )
{
  digitalWrite( MOTOR_IZDO_DIR , LOW );
  digitalWrite( MOTOR_IZDO_SPD , LOW );
}



void Stop_Motor_Right( void )
{
  digitalWrite( MOTOR_DCHO_DIR , LOW );
  digitalWrite( MOTOR_DCHO_SPD , LOW );
}



void Forward_Motor_Left( int velocidad )
{
  digitalWrite( MOTOR_IZDO_DIR, HIGH ); 
  analogWrite( MOTOR_IZDO_SPD, 255-velocidad ); 
}




void Forward_Motor_Right( int velocidad )
{
  digitalWrite( MOTOR_DCHO_DIR, HIGH ); 
  analogWrite( MOTOR_DCHO_SPD, 255-velocidad +MOTOR_DCHO_OFFSET ); 
}




void Reverse_Motor_Left( int velocidad )
{
  digitalWrite( MOTOR_IZDO_DIR, LOW ); 
  analogWrite( MOTOR_IZDO_SPD, velocidad ); 
}




void Reverse_Motor_Right( int velocidad )
{
  digitalWrite( MOTOR_DCHO_DIR, LOW ); 
  analogWrite( MOTOR_DCHO_SPD, velocidad +MOTOR_DCHO_OFFSET ); 
}



