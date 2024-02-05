const int moisturePin = A0; // Analog pin connected to the moisture sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(moisturePin);

  // Convert the analog reading to a moisture percentage (adjust the values based on your sensor)
  int moisturePercentage = map(moistureValue, 1023, 0, 0, 100);

  Serial.print("Moisture Percentage: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  delay(1000); // Delay for a moment before the next reading.
}
