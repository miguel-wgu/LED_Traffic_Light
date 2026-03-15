# Wiring Guide

Step-by-step wiring instructions for the RGB Traffic Light.
See the [Tinkercad Wiring Diagram](Tinkercad%20Wiring%20Diagram.png) for a visual reference,
or the [schematic](Schematic.pdf) for technical detail.

## Components

| Component       | Quantity |
|-----------------|----------|
| Arduino Mega 2560 | 1      |
| LED (Green)     | 1        |
| LED (Yellow)    | 1        |
| LED (Red)       | 1        |
| 220Ω Resistor   | 3        |
| Jumper wires    | 6+       |
| Breadboard      | 1        |

## Pin Mapping

| Arduino Pin | LED Color |
|-------------|-----------|
| 13          | Green     |
| 12          | Yellow    |
| 11          | Red       |
| GND         | Common ground |

## Wiring Steps

Each LED is wired the same way — only the pin number and LED color differ.
Repeat these steps for all three LEDs.

1. **Place the LED** on the breadboard. LEDs are polarized — the longer leg (anode, +) carries current in; the shorter leg (cathode, −) connects to ground.

2. **Connect a 220Ω resistor** in series with the LED's anode leg. The resistor limits current to a safe level — without it, the LED draws too much current and can burn out or damage the Arduino pin. One leg of the resistor connects to the LED anode; the other connects to the Arduino digital pin.

3. **Run a jumper wire** from the free end of the resistor to the corresponding Arduino digital pin (11, 12, or 13).

4. **Run a jumper wire** from the LED's cathode leg to any GND pin on the Arduino. All three LEDs can share the same ground rail on the breadboard, connected to a single GND pin.

## Notes

- The Arduino's digital pins output 5V when HIGH. With a 220Ω resistor, each LED draws roughly 14mA — within the 40mA per-pin limit of the Mega 2560.
- If an LED doesn't light up, check polarity first. Flip it around if needed.
