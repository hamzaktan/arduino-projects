✨ What the Circuit Does

This project shows how to control the brightness of an LED using PWM (Pulse Width Modulation) on an Arduino. By turning a potentiometer, you can smoothly adjust the LED’s intensity — from very dim to fully bright — without flickering. It’s a simple but powerful way to learn about analog input and digital output.

⚙️ How It Works

- 🎚️ The potentiometer acts like a brightness knob. It sends an analog voltage to pin A0.
- 🧠 The Arduino reads this analog value (0–1023) and converts it into a PWM duty cycle (0–255).
- 💡 The PWM signal is sent to pin 11, where the LED is connected.
- 🔄 As you rotate the potentiometer, the LED brightness changes gradually, demonstrating how PWM can simulate analog control using digital signals.
- 
🔌 Connections

- A0 → Potentiometer middle pin (side pins go to 5V and GND)
- Pin 11 → LED (with a resistor, e.g., 220Ω, to GND)
- GND → Common ground for potentiometer and LED
  
👉 This circuit is often used in beginner projects to understand how sensors (like potentiometers) can control actuators (like LEDs) through Arduino’s analog-to-digital conversion and PWM output.
