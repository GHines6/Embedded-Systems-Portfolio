# Embedded Systems Portfolio

This repository contains a curated collection of embedded systems projects built
primarily with Arduino-compatible microcontrollers. The projects focus on core
embedded concepts such as digital and analog I/O, sensor interfacing, actuator
control, and basic user feedback through displays.

Each project is self-contained and includes source code and documentation
describing the hardware setup, functionality, and key concepts demonstrated.

---

## Platforms & Technologies
- Arduino-compatible microcontrollers
- C / C++ (Arduino framework)
- Digital and analog GPIO
- Sensors, actuators, and displays
- I2C communication

---

## Projects

### 🔹 Button LED Toggle
Implements a software-based toggle switch using a momentary push button. Each
button press flips the LED state rather than requiring the button to be held.

**Concepts demonstrated:**
- Digital input/output
- State-based logic
- Edge detection

---

### 🔹 Potentiometer Servo Control
Controls a servo motor using analog input from a potentiometer. Rotating the
potentiometer adjusts the servo position in real time.

**Concepts demonstrated:**
- Analog-to-digital conversion (ADC)
- PWM-based actuator control
- Input-to-output mapping

---

### 🔹 Potentiometer LCD Bar Display
Reads an analog value from a potentiometer and displays both a numeric value and
a horizontal bar graph on an I2C LCD, providing real-time visual feedback.

**Concepts demonstrated:**
- I2C communication
- LCD interfacing
- Data visualization
- Analog signal processing

---

### 🔹 DHT Temperature and Humidity Sensor
Reads temperature and humidity data from a DHT sensor and outputs the
measurements through the serial interface.

**Concepts demonstrated:**
- Digital sensor communication
- Library-based hardware integration
- Periodic data sampling

---

Each project folder contains:
- Source code (`.ino`)
- A project-specific `README.md` explaining functionality and hardware usage

---

## Purpose
This repository is intended to demonstrate hands-on experience with embedded
systems fundamentals, clear project organization, and technical documentation.
It reflects a learning-focused approach rather than optimized or production-
grade designs.

---

## Author
Giovanni Hines  
Electrical Engineering Student – Kennesaw State University

