/**
 * @file    main.cpp
 * @brief   RGB Traffic Light — cycles through green, yellow, and red LEDs
 *          to simulate a traffic light sequence.
 *
 * @board   Arduino Mega 2560 (Elegoo Mega R3)
 * @pins    11 = Red, 12 = Yellow, 13 = Green
 *
 * @author  Miguel
 * @date    2026-03-14
 */

// Arduino.h gives access to core Arduino functions like pinMode(),
// digitalWrite(), aÍnd delay(). Required when using PlatformIO.
#include <Arduino.h>

// *** Pin Assignments     
// Maps each LED color to its digital output pin on the Arduino board.
const int GREEN_LED = 13;
const int YELLOW_LED = 12;
const int RED_LED = 11;

// *** Setup input
// Runs once on power-on. pinMode() configures each pin as OUTPUT so the
// Arduino can drive current through the LEDs.
void setup() {
    pinMode(GREEN_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(RED_LED, OUTPUT);
}

// *** Main Loop
// Runs continuously while the board has power.
// HIGH = voltage on (LED lit), LOW = voltage off (LED dark).
// delay() blocks execution for the given number of milliseconds.
void loop() {
    // GREEN — Go (3 seconds)
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);
    delay(3000);

    // YELLOW — Slow down (1.5 seconds)
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(RED_LED, LOW);
    delay(1500);

    // RED — Stop (3 seconds)
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    delay(3000);
}
