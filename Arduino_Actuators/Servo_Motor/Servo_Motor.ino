/*
In this example code we will see how to control an servo motor
through L293d motor driver shield.
This motor driver provides function of upto of two servo motors.
Servo motor(Eg. SG 90) comes with three female pin having positive in middle(generally 
red in color), have signal and ground wire by side usally in orange and grey color respectively.
Servo 1 and Servo 2 signal wire on driver is connected with pin 10 and 9 
on arduino uno board respectively.

 Lets take an example of sweep and run the servo motor.
*/
#include <Servo.h>  // Include the servo library 

Servo myservo;  // Create servo object to control a servo motor

int pos = 0;    // Create a variable to store the servo position

void setup() {
  myservo.attach(10);  // Attaches the servo on motor driver servo header i.e., Servo 1 or Servo 2 and 
  // write thee pin number accordingly.
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) 
  {                                    // Goes from 0 degrees to 180 degrees in steps of 1 degree                          
    myservo.write(pos);                // Tell servo to go to position in variable 'pos'
    delay(15);                         // Waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) 
  {                                   // Goes from 180 degrees to 0 degrees
    myservo.write(pos);               // Tell servo to go to position in variable 'pos'
    delay(15);                        // Waits 15 ms for the servo to reach the position
  }
}
