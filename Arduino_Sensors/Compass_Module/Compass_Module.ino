#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_HMC5883_U.h>

Adafruit_HMC5883_Unified mag = Adafruit_HMC5883_Unified(12345);

void setup(void) {
  Serial.begin(9600);
  Serial.println("HMC5883L Magnetometer Test");  
  if(!mag.begin()) {
    Serial.println("No HMC5883L detected ... Check your connections!");
    while(1);
  }
}

void loop(void) {
  sensors_event_t event; 
  mag.getEvent(&event);

  float heading = atan2(event.magnetic.y, event.magnetic.x);
  
  // Convert heading to degrees
  if(heading < 0)
    heading += 2*PI;
  if(heading > 2*PI)
    heading -= 2*PI;
  float headingDegrees = heading * 180/M_PI;
  
  Serial.print("Heading: "); Serial.print(headingDegrees); Serial.println(" degrees");
  delay(500);
}
