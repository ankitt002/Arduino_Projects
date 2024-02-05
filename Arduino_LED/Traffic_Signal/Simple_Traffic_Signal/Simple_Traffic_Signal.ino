/*
 Let's create a simple traffic light using three LEDs
 such as red, green, orange and using delay() function 
 to toggle the state of each led.
 Red LED for 3s,
 Green LED for 3s,
 Orange for 1s. 
*/

int redPin = 6;
int greenPin = 4;
int orangePin = 5;

void setup() 
 {
  // To get the output define the mode for respective pins.
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(orangePin, OUTPUT);
 }

void loop() 
 {
  //To blink the signal, here one by one led will glow in loop.
  //Green LED
  digitalWrite(greenPin, HIGH);
  delay(3000);
  digitalWrite(greenPin, LOW);

  //Orange LED
  digitalWrite(orangePin, HIGH);
  delay(1000);
  digitalWrite(orangePin, LOW);

  //Red LED
  digitalWrite(redPin, HIGH);
  delay(3000);
  digitalWrite(redPin, LOW);
  
 }
