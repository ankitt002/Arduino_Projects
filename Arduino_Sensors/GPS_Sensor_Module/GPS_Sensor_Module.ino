#include <TinyGPS++.h>
#include <SoftwareSerial.h>

SoftwareSerial ss(3, 2);  // RX, TX (connect to the GPS module)

TinyGPSPlus gps;

void setup() {
  Serial.begin(9600);
  ss.begin(9600);
}

void loop() {
  while (ss.available() > 0) {
    if (gps.encode(ss.read())) {
      if (gps.location.isValid()) {
        Serial.print("Latitude: ");
        Serial.println(gps.location.lat(), 6);
        Serial.print("Longitude: ");
        Serial.println(gps.location.lng(), 6);
      }
      if (gps.altitude.isValid()) {
        Serial.print("Altitude: ");
        Serial.println(gps.altitude.meters());
      }
      if (gps.time.isValid()) {
        Serial.print("Time: ");
        Serial.println(gps.time.hour() + 8); // Adjust for UTC time zone
        Serial.print(":");
        Serial.print(gps.time.minute());
        Serial.print(":");
        Serial.println(gps.time.second());
      }
    }
  }
}
