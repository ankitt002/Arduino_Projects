const int voltagePin = A0; // Analog pin connected to the voltage sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(voltagePin);
  
  // Convert the analog reading to voltage (adjust based on your voltage sensor)
  float voltage = (sensorValue * 5.0) / 1023.0; // Assumes a 5V Arduino
  
  Serial.print("Voltage: ");
  Serial.print(voltage, 2); // Display voltage with two decimal places
  Serial.println(" V");

  delay(1000); // Delay before the next reading.
