/*
    Project name : ESP8266 Tilt Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-tilt-sensor
*/

// Define the pin connected to the tilt sensor
const int tiltSensorPin = D2; // GPIO pin D2 on NodeMCU

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(tiltSensorPin, INPUT_PULLUP); // Set the tilt sensor pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the tilt sensor
  int tiltState = digitalRead(tiltSensorPin);

  // Print the tilt state to the Serial Monitor
  if (tiltState == LOW) {
    Serial.println("Tilt detected!");
  } else {
    Serial.println("No tilt detected.");
  }

  delay(500); // Add a small delay to debounce the sensor
}
