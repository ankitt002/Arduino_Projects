const int pHPin = A0; // Analog pin connected to the pH meter module

void setup() {
  Serial.begin(9600);
}

void loop() {
  int pHValue = analogRead(pHPin);

  // Convert the analog reading to pH value (adjust the values based on your sensor and calibration)
  float pH = (pHValue - 250) * 5.0 / 760;

  Serial.print("pH Value: ");
  Serial.println(pH, 2); // Display pH value with two decimal places

  delay(1000); // Delay for a moment before the next reading.
}
