In this project, I am using a Potentiometer to control the brightness of an LED through PWM (Pulse Width Modulation). This allows us to transition from a simple "on/off" state to a smooth range of light intensity. 🚀

🛠️ Hardware Components


🤖 Arduino Board (Uno, Nano, etc.)

💡 LED (Any color)

⚡ 220 Ohm Resistor

🕹️ 10k Potentiometer

🔌 Breadboard & Jumper Wires


🔌 Circuit Connections

🔴 LED Anode (+): Connected to Digital Pin 11 (PWM)

🔵 LED Cathode (-): Connected to GND via Resistor

📍 Potentiometer Middle Pin: Connected to Analog Pin A0

🔋 Potentiometer Side Pins: Connected to 5V and GND


🧠 How It Works

Input: The Arduino reads an analog signal from the potentiometer (Range: 0 to 1023).

Processing: The code uses the map() function to convert this 10-bit input into an 8-bit output (Range: 0 to 255).

Output: The processed value is sent to Pin 11 using analogWrite(), which adjusts the LED brightness accordingly. 🌟


📋 Technical Highlights

Input Channel: Analog A0 📥

Output Channel: PWM Pin 11 📤

Resolution: Scaled from 10-bit to 8-bit for PWM compatibility.
