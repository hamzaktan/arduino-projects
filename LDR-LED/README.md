# 🌞 LDR Light Sensor LED Project

Description

This project uses an LDR (Light Dependent Resistor) to control an LED based on ambient light levels.

When the environment is dark, the LED turns ON.  
When the environment is bright, the LED turns OFF.

This project introduces analog input reading and basic decision-making with Arduino.



## 🧰 Components

- Arduino Uno  
- LDR (Light Dependent Resistor)  
- 10k ohm resistor  
- LED  
- 220 ohm resistor  
- Breadboard  
- Jumper wires  



## 🔌 Circuit Connection

### 🌞 LDR (Voltage Divider)

- One leg of LDR → **5V**
- Other leg of LDR → **A0**
- From A0 → **10k ohm resistor → GND**

👉 This creates a voltage divider circuit for accurate light measurement.



### 🔴 LED

- Arduino **Pin 13 → 220 ohm resistor → LED long leg (anode)**
- LED short leg (cathode) → **GND**



## ⚙️ Working Principle

- The LDR reads light intensity as an analog value (0–1023)
- In dark environments → value decreases → LED turns ON  
- In bright environments → value increases → LED turns OFF  
- The threshold value determines switching point  
