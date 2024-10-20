#include "led.h"
#include <stdio.h>

int main() {
    // Initialize stdio and LED pins
    stdio_init_all();
    init_leds();

    // Start blinking the LED sequence
    blink_led_sequence();

    return 0;
}