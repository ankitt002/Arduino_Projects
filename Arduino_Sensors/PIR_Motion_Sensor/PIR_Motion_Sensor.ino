int pirPin = 2; // Digital pin connected to the PIR sensor
int ledPin = 13; // Built-in LED on most Arduino boards

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);
  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No motion.");
  }
  delay(1000); // Delay for a moment before the next reading.
}
