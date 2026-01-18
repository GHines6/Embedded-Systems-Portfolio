# Potentiometer LCD Bar Display

## Overview
This project reads an analog value from a potentiometer and displays both a
numeric value and a horizontal bar graph on an I2C LCD. The display updates in
real time as the potentiometer is adjusted.

## Hardware Used
- Arduino-compatible microcontroller
- Potentiometer
- I2C LCD display
- Jumper wires

## How It Works
The microcontroller reads the potentiometer value using its ADC, maps the value
to the width of the LCD, and renders a visual bar graph alongside the numeric
reading.

## Libraries Used
- Wire
- LiquidCrystal_I2C

