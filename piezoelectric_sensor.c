/*
    Project name : Piezoelectric Sensor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-piezoelectric-sensor
*/

const int piezoSensorPin = A0; // Analog pin connected to the piezoelectric sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the piezoelectric sensor
  int sensorValue = analogRead(piezoSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Piezoelectric Sensor Value: ");
  Serial.println(sensorValue);

  delay(100); // Add a small delay to avoid spamming the Serial Monitor
}
