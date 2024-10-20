#ifndef led_H
#define led_H

#include "pico/stdlib.h"

// Define GPIO pins for the LEDs
#define LED_PIN 15
#define LED_PIN2 14
#define LED_PIN3 13

// Function prototypes for LED operations
void init_leds();
void turn_on_led(uint pin);
void turn_off_led(uint pin);
void blink_led_sequence();

#endif