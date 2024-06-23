# ESP8266 Tilt Sensor Project

#### Project Overview
This project demonstrates how to interface a tilt sensor with an ESP8266 microcontroller to detect tilt movements and determine the tilt state. Tilt sensors are commonly used in various applications where orientation detection or tilt-based triggering is required.

#### Components Needed
- **ESP8266 Microcontroller (NodeMCU)**
- **Tilt Sensor**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup
1. **Connecting the Tilt Sensor to ESP8266:**
   - Connect one leg of the tilt sensor to the GPIO pin D2 on the ESP8266 (NodeMCU).
   - Connect the other leg of the tilt sensor to ground (GND) of the ESP8266.
   - Ensure a common ground (GND) connection between the ESP8266 and the tilt sensor.

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600 for debugging purposes.
   - Configure the tilt sensor pin (D2) as input with an internal pull-up resistor using `pinMode()`.

2. **Operation:**
   - In the `loop()` function:
     - Read the state of the tilt sensor using `digitalRead(tiltSensorPin)`.
     - If the tilt sensor detects a tilt (LOW state), print "Tilt detected!" to the Serial Monitor.
     - If no tilt is detected (HIGH state), print "No tilt detected." to the Serial Monitor.
     - Add a small delay (`delay(500)`) to debounce the sensor and avoid multiple detections for a single tilt event.

3. **Considerations:**
   - **Debouncing:** Ensure the delay is sufficient to debounce the tilt sensor and prevent false triggers.
   - **Sensor Placement:** Mount the tilt sensor securely to ensure reliable detection of tilt movements.
   - **Power Supply:** Ensure stable power supply to the ESP8266 and the tilt sensor for consistent operation.

#### Applications
- **Orientation Detection:** Monitor changes in orientation or tilt angle.
- **Security Systems:** Trigger alarms or notifications based on tilt detection.
- **Robotics and IoT:** Incorporate tilt sensing into robotics projects or IoT devices for movement detection.

#### Notes
- **Sensor Variants:** Different tilt sensor models may have varying sensitivity and output configurations; refer to the sensor datasheet for precise details.
- **Serial Output:** Utilize the Serial Monitor to observe and debug tilt sensor readings and operations.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Tilt Sensor](https://projectslearner.com/learn/esp8266-tilt-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner