# RGB Traffic Light

An Arduino project that simulates a traffic light using 3 LEDs.

View the project page on my portfolio [here](https://miguels-build-log.vercel.app/projects/led-traffic-light).

## Demo

![LED Cycle](https://raw.githubusercontent.com/miguel-wgu/LED_Traffic_Light/main/docs/LED%20Cycle.gif)

## Hardware

- Elegoo Megar R3 (Arduino Mega 2560)
- 3x LEDs (Green, Yellow, and Red)
- 3x 220ohm Resistors
- Jumper wires
- Breadboard

## Wiring

![Wiring Diagram](docs/Tinkercad%20Wiring%20Diagram.png)
Link to Tinker it [here](https://www.tinkercad.com/things/kvZEJ7QVY8S-led-traffic-lights).

For the more technical folk, a [schematic diagram](docs/Schematic.pdf) is also available.

## Software

- [CLion](https://www.jetbrains.com/clion/) with the [PlatformIO](https://platformio.org/) plugin

## Project Structure

```
├── src/
│   └── main.cpp                       # Traffic light logic (setup & loop)
├── docs/
│   ├── WIRING.md                      # Step-by-step wiring instructions
│   ├── Schematic.pdf                  # Circuit schematic
│   ├── Tinkercad Wiring Diagram.png   # Visual wiring reference
│   ├── LED Cycle.gif                  # Demo animation
│   └── LED_Traffic_Light-*.jpg        # Build photos
├── platformio.ini                     # PlatformIO board & build config
└── CHANGELOG.md                       # Version history
```