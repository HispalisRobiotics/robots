/*
 *  Hispalis RobIOTICS Arduino Trainer 
 *  
 *  RoboTest
 *  
 *  Version Shield: 1.0
 *  
 *  Motor Driver L9110
 *  Alimentacion:   5V
 * 
 *  Status:
 *  
 *  Revision: NOVIEMBRE 2017 
 *  
 *  
 *    Trabajando en Test_Motores:
 *    
 *      Igualar velocidades
 *      #define MOTOR_DCHO_OFFSET   -20 en MotorHardware
 *  
 *    ToDO:
 *  
 *      Revisar Modulo:
 *          Walk.cpp
 *          Bluetooth.cpp             
 *  
 *      Conectar BUZZER Crear Primitivas
 */
#include "ArduinoTrainer.h"






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

  pinMode( MOTOR_IZDO_DIR , OUTPUT );
  pinMode( MOTOR_IZDO_SPD , OUTPUT );
  pinMode( MOTOR_DCHO_DIR , OUTPUT );
  pinMode( MOTOR_DCHO_SPD , OUTPUT );
  
  Stop();

  //  Activa el pin 12 ( PUlSADOR ) como entrada
  pinMode( SWITCH_D12 , INPUT_PULLUP );     // Enable internal pull-up resistor
  pinMode( SWITCH_D13 , INPUT_PULLUP );     // Enable internal pull-up resistor
  
  // pinMode( SWITCH , INPUT );         // The line above is similar to these 2 commented lines
  //digitalWrite(SWITCH , HIGH);        // Another Enable internal pull-up resistor

  Serial.begin( 115200 );
}




void loop() 
{

  Led_Test();                     // Âqui se pueden ir probando uno a uno los tests
  
  
  /*
  //Led_Test();                     // OK
  
  //Switch_Test();                // OK
  
  // Distance_Test();             // OK
  
  // Motor_Test();                // OK
  
  //Motor_PWM_Test();             // OK 
  
  //Bluetooth_Test();             //  OK Mejorar, documentar
  
  
  //Walk_Test();                  //  Revisar , documentar
   
  
  */
  
  for( int i=0 ; i < 5 ; i++ )
    Led_Parpadea( 250 , 250 );
    
  PARA
}



/*
 
      Fin del Programa Principal 
 
**************************************************************************************/




















