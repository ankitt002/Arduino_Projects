/*
 Let's build an binary clock using Led and a RTC module(for accurate timing).
*/

#include <Wire.h>
#include <RTClib.h>

RTC_DS3231 rtc;  // Initialize the RTC object

// Define LED pins for hours (H0-H2) and minutes (M0-M3)
const int hoursPins[] = {2, 3, 4};
const int minutesPins[] = {5, 6, 7, 8};

void setup() {
  Wire.begin();
  rtc.begin();

  // Set the initial LED pin modes
  for (int i = 0; i < 3; i++) {
    pinMode(hoursPins[i], OUTPUT);
  }
  for (int i = 0; i < 4; i++) {
    pinMode(minutesPins[i], OUTPUT);
  }
}

void loop() {
  DateTime now = rtc.now();

  // Display the time in binary format
  displayBinaryHours(now.hour());
  displayBinaryMinutes(now.minute());

  delay(1000);  // Update every second
}

void displayBinaryHours(int hours) {
  for (int i = 0; i < 3; i++) {
    int bit = (hours >> i) & 1;
    digitalWrite(hoursPins[i], bit);
  }
}

void displayBinaryMinutes(int minutes) {
  for (int i = 0; i < 4; i++) {
    int bit = (minutes >> i) & 1;
    digitalWrite(minutesPins[i], bit);
  }
}
