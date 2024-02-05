const int hallPin = 2; // Digital pin connected to the Hall-effect sensor

void setup() {
  Serial.begin(9600);
  pinMode(hallPin, INPUT);
}

void loop() {
  int sensorValue = digitalRead(hallPin);
  
  if (sensorValue == HIGH) {
    Serial.println("Magnetic field detected!");
  } else {
    Serial.println("No magnetic field.");
  }
  
  delay(1000); // Delay for a moment before the next reading.
}
