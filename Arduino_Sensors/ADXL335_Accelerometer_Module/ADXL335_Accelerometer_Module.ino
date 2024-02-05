/* 
Let's build and read the accel value through and adxl355 accleromter to know the posotion of an object 
using three components x, y, z component.
*/

const int xPin = A0; // Analog pin for X-axis
const int yPin = A1; // Analog pin for Y-axis
const int zPin = A2; // Analog pin for Z-axis

void setup() {
  Serial.begin(9600);
}

void loop() {
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);
  int zValue = analogRead(zPin);

  Serial.print("X-Axis: ");
  Serial.println(xValue);
  Serial.print("Y-Axis: ");
  Serial.println(yValue);
  Serial.print("Z-Axis: ");
  Serial.println(zValue);

  delay(1000); // Delay before the next reading.
}
