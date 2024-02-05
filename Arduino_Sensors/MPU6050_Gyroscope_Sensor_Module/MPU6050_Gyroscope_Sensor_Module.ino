#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  
  Wire.begin();
  mpu.initialize();
  
  // Verify the connection with the MPU-6050
  if (mpu.testConnection()) {
    Serial.println("MPU-6050 connection successful");
  } else {
    Serial.println("MPU-6050 connection failed");
    while (1);
  }
}

void loop() {
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz); // Read accelerometer and gyroscope data
  
  // Display angular rate (gyroscope) data
  Serial.print("Gyroscope: ");
  Serial.print("X = "); Serial.print(gx / 131.0); // Divide by sensitivity scale
  Serial.print(" deg/s, Y = "); Serial.print(gy / 131.0);
  Serial.print(" deg/s, Z = "); Serial.print(gz / 131.0);
  Serial.println(" deg/s");
  
  delay(1000); // Delay for a moment before the next reading.
}
