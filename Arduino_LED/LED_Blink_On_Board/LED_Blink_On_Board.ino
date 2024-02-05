/* 
 Blink LED present on arduino board

 In Arduino Uno, Arduino Nano, Arduino Mega have an built-in which is connected through a digital 
 pin i.e., pin 13; You can easily check for the LED connection with the datasheet of 
 respective board.

 With this blink test we are going to turn ON and turn OFF the LED for 1S respectively.
*/

/* Define led pin with pin number 13 or we can use LED_BUILTIN in
as pinMode(LED_BUILTIN, OUTPUT);(example code given in arduino IDE) in void setup function without defining the led 
but we will see how we can do by defining the LED
*/

/*Define the pin number for the LED*/
const in ledPin = 13;

/*Setup Function runs once when you power on or reset the arduino board*/
void setup() {
 //Initialize the digital pin as output pin 
 pinMode(13, OUTPUT); 
}

/*Loop funtion runs repeatedly*/
void loop() {
  
  //this loop function runs again and again until the board is switch off or program changed
digitalWrite(13, HIGH);    // turn ON the LED (HIGH=1 or 5V given to the pin 13)
delay(1000);               // Hold the state of the LED for a second
digitalWrite(13, LOW);     // now turn OFF the LED( LOW=0 or 0V to pin 13)
delay(1000);               // again wait for 1 second(1000 millisecond)
}
