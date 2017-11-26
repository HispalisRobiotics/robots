/*
 * 
 * 
 */
#include "ArduinoTrainer.h"


int state;
int flag=0;        
int stateStop=0;




void Bluetooth_Test()
{
    int speed = VELOCIDAD;
  
    
    
  
    if(Serial.available() > 0)
    {     
        state = Serial.read();   
        flag=0;
    }
    // if the state is 'F' the DC motor will go forward
    if (state == 'F') 
    {
        Palante( speed );
        if(flag == 0)
        {
          Serial.println("Go Forward!");
          flag=1;
        }
    }
    
    // if the state is 'R' the motor will turn left
    else if (state == 'R') 
    {
        Forward_Giro_Right( speed );
        if(flag == 0)
        {
          Serial.println("Turn Right");
          flag=1;
        }
        delay(500);
        state=3;
        stateStop=1;
    }
    // if the state is 'S' the motor will Stop
    else if (state == 'S' || stateStop == 1) 
    {
        Stop();
        if(flag == 0)
        {
          Serial.println("STOP!");
          flag=1;
        }
        stateStop=0;
    }
    // if the state is 'L' the motor will turn right
    else if (state == 'L') 
    {
        Forward_Giro_Left( speed );
        if(flag == 0)
        {
          Serial.println("Turn Left");
          flag=1;
        }
        delay(500);
        state=3;
        stateStop=1;
    }
    // if the state is 'B' the motor will Reverse
    else if (state == 'B') 
    {
        Patras( speed );
        if(flag == 0)
        {
          Serial.println("Reverse!");
          flag=1;
        }
    }
    else if (state == 'X') 
    {
      if(flag == 0)
        {
          Serial.println("Vuelvo a main!");
          flag=1;
          stateStop=1;
        }
      return;
    }

}



