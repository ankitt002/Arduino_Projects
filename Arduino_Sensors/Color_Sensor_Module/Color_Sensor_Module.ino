const int S0 = 2; // Digital pins connected to S0, S1, S2, and S3 on the sensor module
const int S1 = 3;
const int S2 = 4;
const int S3 = 5;
const int colorSensorOUT = 6; // Digital pin connected to the OUT pin on the sensor module

void setup() {
  Serial.begin(9600);
  
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  
  digitalWrite(S0, LOW);  // Set the color sensing mode to no scaling
  digitalWrite(S1, HIGH); // Set the color sensing mode to no scaling
  
  pinMode(colorSensorOUT, INPUT);
}

void loop() {
  digitalWrite(S2, LOW);  // Turn off color sensor integration
  digitalWrite(S3, LOW);  // Turn off color sensor integration
  
  delay(50); // Delay for sensor to settle

  digitalWrite(S2, HIGH); // Turn on color sensor integration
  digitalWrite(S3, HIGH); // Turn on color sensor integration
  
  delay(50); // Delay for sensor to measure color

  int redValue = pulseIn(colorSensorOUT, LOW); // Read red color value
  int greenValue = pulseIn(colorSensorOUT, LOW); // Read green color value
  int blueValue = pulseIn(colorSensorOUT, LOW); // Read blue color value

  Serial.print("Red: ");
  Serial.print(redValue);
  Serial.print(" Green: ");
  Serial.print(greenValue);
  Serial.print(" Blue: ");
  Serial.print(blueValue);
  Serial.println();

  delay(1000); // Delay before the next reading.
}
