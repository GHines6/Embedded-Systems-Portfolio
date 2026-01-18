# Potentiometer Servo Control

## Overview
This project controls a servo motor using a potentiometer. Rotating the
potentiometer changes the servo position in real time, demonstrating analog
input processing and PWM-based actuator control.

## Hardware Used
- Arduino-compatible microcontroller
- Potentiometer
- Servo motor
- Jumper wires

## How It Works
The microcontroller reads an analog voltage from the potentiometer, maps the
input value to a valid servo angle, and outputs a PWM signal to position the
servo accordingly.

## Libraries Used
- Servo
