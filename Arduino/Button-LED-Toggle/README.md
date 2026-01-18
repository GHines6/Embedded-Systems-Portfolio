# Button LED Toggle

## Overview
This project uses a momentary push button to toggle an LED on and off, mimicking
the behavior of a physical light switch. Each button press flips the LED state
instead of requiring the button to be held.

## Hardware Used
- Arduino-compatible microcontroller
- Push button
- LED
- Current-limiting resistor
- Jumper wires

## How It Works
The program tracks the previous and current button states to detect a new button
press. When a rising edge is detected, the LED state is inverted and written to
the output pin.

## Libraries Used
- None (uses built-in Arduino core functions)
