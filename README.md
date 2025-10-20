# Ultrasonic-Distance-LCD-Arduino-Project

## Project Overview
This project uses an Arduino to measure distance using an HC-SR04 ultrasonic sensor and displays the result on a 16x2 LCD screen. The sensor sends out ultrasonic pulses and calculates the distance based on the time it takes for the echo to return.

## Hardware Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD Display
- Resistors and Jumper Wires
- Breadboard

## Circuit Design
The wiring and circui were designed and tested on [Tinkercad][https://www.tinkercad.com/things/lJYvgexFkR5-ultrasonic-distance-sensor-lcd?sharecode=TDITq4NjOe6eSeY_IUtpl-jiBzxkqCpfhoqhFJ6JbM4]

## Code
The Arduino code is in the 'UltrasonicDistanceSensorLCD.ino' file. It uses the LiquidCrystal library to interface with the LCD.

## How to Use
1. Connect your hardware as to the Tinkercad design.
2. Upload the 'UltrasonicDistanceSensorLCD.ino' file to your Arduino.
3. Open the Serial Monitor at 9600 baud to see the distance readings.
4. Watch the LCD display update in real time!

## Credits
This project is based on a tutorial by [EAZYTRONIC] on YouTube:
[https://www.youtube.com/watch?v=AIkesXcCP9Q]
This code was modified to improve timing and readability.
