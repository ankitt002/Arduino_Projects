const int gasPin = A0; // Analog pin connected to the gas sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(gasPin); // Read the analog sensor value
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  delay(1000); // Delay for a moment before the next reading.
}
