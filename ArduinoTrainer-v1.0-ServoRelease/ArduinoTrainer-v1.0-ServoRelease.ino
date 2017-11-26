/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  RoboTest
 *  
 *  Version Shield: 1.0
 *  
 *  2 Motor Servos outputs used
 *  Alimentacion: 5V
 * 
 * 
 *  Revision: Septiembre 2017 
 *  
 *  ToDO:
 *  
 *      Revisar Modulo Walk.cpp
 *      Documentar JoseleShieldv1.h
 *      
 *      
 *      
 *  
 *      En Hasta que llegues a distancia=-1000;
 *  
 *  
 *  
  */
#include "ArduinoTrainer.h"

#include <Servo.h> 
#include <NewPing.h>               


//extern Servo Motor_Left , Motor_Right; 
Servo Motor_Left , Motor_Right; 



/*
 
      Variables globales
 
*/






/**************************************************************************************
 
      Programa Principal 
 
*/
void setup() 
{
  pinMode( LED_ROJO , OUTPUT );
  pinMode( LED_AMARILLO , OUTPUT );
  pinMode( LED_VERDE , OUTPUT );
  

  pinMode(HCSR04_TRIGGER , OUTPUT);
  pinMode(HCSR04_ECHO , INPUT); 

  Motor_Left.attach( MOTOR_IZDO );
  Motor_Right.attach( MOTOR_DCHO );
  Stop();

  //  Activa el pin 12 ( PUlSADOR ) como entrada
  pinMode( SWITCH_D12 , INPUT_PULLUP );     // Enable internal pull-up resistor
  pinMode( SWITCH_D13 , INPUT_PULLUP );     // Enable internal pull-up resistor
  
  // pinMode( SWITCH , INPUT );         // The line above is similar to these 2 commented lines
  //digitalWrite(SWITCH , HIGH);        // Another Enable internal pull-up resistor

  Serial.begin( 9600 );
}




void loop() 
{
  
  //Led_Test();           // OK
  
  //Switch_Test();        // OK
  
  for(;;)
    Distance_Test();      //Ok
  
  /*
   
   Revisar
  
  
  //Motor_Test();
  //Motor_PWM_Test();
  //Walk_Test();
  */
  Led_Parpadea( 250 , 500 );
  PARA
}



/*
 
      Fin del Programa Principal 
 
**************************************************************************************/




















