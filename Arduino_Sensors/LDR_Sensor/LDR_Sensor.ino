int ldrPin = A0; // Analog pin connected to the LDR

void setup() {
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read the analog sensor value
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  delay(1000); // Delay for a moment before the next reading.
}
