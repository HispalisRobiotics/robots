/*
        HispalisRoBIOTICS

        Arduino Trainer v 1.0

        Rev:    2017    September


        ArduinoTrainer.h



*/


#if defined(ARDUINO) && ARDUINO >= 100
  #include <Arduino.h>
#else
  #include <WProgram.h>
  #include <pins_arduino.h>
#endif

#include <avr/io.h>
#include <avr/interrupt.h>


#include <Servo.h> 


#define LED_DELAY           500
#define LED_ROJO              3
#define LED_AMARILLO          5
#define LED_VERDE             6



#define MOTOR_DELAY        1000
#define MOTOR_IZDO            9
#define MOTOR_DCHO           10
#define SERVO_1               7
#define SERVO_2               8

#define BUZZER               10

#define SWITCH_D12           13
#define SWITCH_D13           12    

#define HCSR04_TRIGGER        2
#define HCSR04_ECHO           4


#define VELOCIDAD           150
#define HORIZONTE           300

#define PARA           for(;;);



/*
  
      Prototipos
 
*/
void Led_Test(void);
void Motor_Test(void);
void Motor_PWM_Test(void);
void Distance_Test(void);
void Switch_Test(void);
void Walk_Test(void);



void Led_Parpadea( int , int ) ;
int Switchd12_esta_pulsado(void);
int Switchd13_esta_pulsado(void);

int Distance_StandardTest(void);
int Distance_PingTest(void);
void Hasta_que_lleguesa( int );



/*
    Funciones de Motor 
 */

void Palante( int );
void Patras( int );
void Stop( void );

void Forward_Giro_Left( int );
void Forward_Giro_Right( int );
void Reverse_Giro_Left( int );
void Reverse_Giro_Right( int );

void Mediavuelta_Left( int );
void Mediavuelta_Right( int );

void Stop_Motor_Left( void );
void Stop_Motor_Right( void );

void Forward_Motor_Right( int );
void Forward_Motor_Left( int);
void Reverse_Motor_Left( int );
void Reverse_Motor_Right( int );



void LineSensor_Test( void );
