/*
  Created by: Samuel Webster
  Created on: Feb 2023
  Turns an LED on for one second, then off for one second, repeatedly.
*/
#include <Servo.h>
Servo servo;

void setup() {
  servo.attach(13);
  servo.write(0);
}

void loop() 
{ 
 // scan from 0 to 180 degrees
  for(int angle = 0; angle < 90; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(int angle = 90; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
}
