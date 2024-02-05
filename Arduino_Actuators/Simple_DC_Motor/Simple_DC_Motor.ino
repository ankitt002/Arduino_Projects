/* 
In this code we will control DC motor using L293d motor shield which can control upto four DC motor.
We write a simple code to rotate a simple DC motor in one direction for two second 
and stops for one second and again rotate the motor in other direction for two second
and stop for one second.
Wait for two second and repeat the process
*/
#include <AFMotor.h>     //Include the Adafruit motor shield V1 library

AF_DCMotor motor(2);    // Create a motor object

void setup() {
  // Nothing needed in the setup function
}

void loop()
//Put the main code in this function to repeat the process again and again
 {
  motor.setSpeed(200);   // Set the speed of motor ( 0=stop & 255=full speed)
  //Now write function to run the motor
  motor.run(FORWARD);    // Run the motor in on direction i.e., forward for 2s
  delay(2000); 
  motor.run(RELEASE);    // Stop the motor for 1s
  delay(1000);
  motor.run(BACKWARD);   // Command to rotate the motor in othe direction that is backward for 2s
  delay(2000);
  motor.run(RELEASE);    // Again stop the motr for 1s 
  delay(1000);
 }
