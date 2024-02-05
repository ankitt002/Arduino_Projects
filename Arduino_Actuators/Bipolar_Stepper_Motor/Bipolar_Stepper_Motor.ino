/*
In this code we will see how to actuate stepper motor 
using L293D motor shield.
With this motor driver we can control upto two stepper motor 
from two ports of motor driver i.e., Port1(M1, M2) AND Port2(M3, M4). 
First identify the pairs of cable having same winding via multimeter
and connect the pair in any of ports.

Let's take an example to rotate a bipolar stepper motor 250
step forward and 250 step backward with microstepping.
*/

#include<AFMotor.h>

// Create an object with number of step in oder 
// to complete one rotation and write the port number.
AF_Stepper stepper1(20, 2); 

void setup() 
{
  // put your setup code here, to run once:
  stepper1.setSpeed(200);  //Set the speed of rotation that is 200 rotation per minute
}

void loop() 
{
  // put your main code here, to run repeatedly:
  stepper1.step(250, FORWARD, MICROSTEP); // Rotate the motor with 100 microsteps in forward direction
  stepper.step(250, BACKWARD, MICROSTEP); //Rotate the motor in backward direction
}
