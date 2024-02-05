const int IR_PIN = A0; // Analog pin connected to the IR proximity sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(IR_PIN); // Read the analog sensor value
  float voltage = sensorValue * (5.0 / 1023.0); // Convert analog reading to voltage
  float distance = 1.0 / (voltage * 0.019) - 3.5; // Calculate distance in centimeters (adjust constants for your sensor)

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Delay for a moment to avoid rapid serial output
}
