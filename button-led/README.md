 Description
This project demonstrates how to control an LED using a push button with an Arduino Uno.  
When the button is pressed, the LED turns ON. When the button is released, the LED turns OFF.

This project introduces basic digital input reading and control logic.

---

## 🧰 Components
- Arduino Uno  
- 1x LED  
- 1x 220 ohm resistor (for LED)  
- 1x Push button  
- 1x 10k ohm resistor (pull-down resistor)  
- Jumper wires  
- Breadboard  

---

## 🔌 Circuit Connection

### 🔴 LED Connection:
- Arduino **Pin 13 → 220 ohm resistor → LED long leg (anode)**
- LED short leg (cathode) → **GND**

### 🔘 Button Connection (Pull-down):
- One leg of the button → **5V**
- Other leg of the button → **Pin 2**
- Same leg (Pin 2 side) → **10k ohm resistor → GND**

👉 The pull-down resistor ensures the button reads LOW when not pressed.

---

## ⚙️ Working Principle
- When the button is **pressed**, Pin 2 reads **HIGH (1)** → LED turns ON  
- When the button is **released**, Pin 2 reads **LOW (0)** → LED turns OFF  
- The system continuously checks the button state  
