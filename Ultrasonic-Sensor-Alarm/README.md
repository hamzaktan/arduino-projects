# Ultrasonic Sensor Alarm 🚨

This Arduino project demonstrates how to use an ultrasonic sensor to measure distance and trigger visual and audio alerts.  
It’s a simple yet effective way to learn about sensors, signals, and basic electronics.  

## ⚙️ Features

- 📏 **Distance Measurement** using HC-SR04 ultrasonic sensor
- 🔔 **Buzzer Alarm** when an object is too close
- 🟢 **Green LED** for safe distance
- 🔴 **Red LED** for warning zone
- ⏱️ Adjustable detection range with `maxRange` and `minRange`

## 🛠️ Hardware Requirements

- Arduino Uno (or compatible board)
- HC-SR04 Ultrasonic Sensor
- Buzzer
- 2 LEDs (Green & Red)
- Resistors
- Jumper wires & breadboard

## 💻 Code

The main logic is in `Ultrasonic-Sensor-Alarm.ino`.  
It includes three key functions:
- `measureDistance()` → Calculates distance using the sensor
- `beep()` → Controls buzzer frequency based on distance
- `controlLED()` → Switches LEDs depending on proximity

## 🔎 How It Works

1. The ultrasonic sensor sends out a pulse and measures the echo time.
2. The Arduino calculates the distance in centimeters.
3. If the distance is greater than 10 cm → 🟢 Green LED lights up.
4. If the distance is less than or equal to 10 cm → 🔴 Red LED + buzzer alarm.
5. If the distance is outside the defined range → LEDs and buzzer stay off.

## 🚀 Setup Instructions

1. Open Arduino IDE.
2. Load the `ultrasonic_alarm.ino` file.
3. Connect the components according to the wiring diagram.
4. Upload the code to your Arduino board.
5. Test by moving an object closer and farther from the sensor.

## 🎯 Applications

- Parking assistance systems
- Object detection
- DIY security alarms
- Robotics projects
