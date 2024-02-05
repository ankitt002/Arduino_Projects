const int trigPin = 2;
const int echoPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  float distance = (duration / 2.0) / 29.1; // Speed of sound is 343 meters per second or 29.1 microseconds per centimeter.

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Delay for a moment before the next measurement.
}
