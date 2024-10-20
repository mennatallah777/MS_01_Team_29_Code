#include "led.h"
#include <stdio.h>

// Function to initialize the LED pins
void init_leds()
{
    // Initialize the chosen pins for output
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    gpio_init(LED_PIN2);
    gpio_set_dir(LED_PIN2, GPIO_OUT);

    gpio_init(LED_PIN3);
    gpio_set_dir(LED_PIN3, GPIO_OUT);

    // Optional: Enable pull-up resistor for LED_PIN3
    gpio_pull_up(LED_PIN3);
}

// Function to turn on an LED
void turn_on_led(uint pin)
{
    gpio_put(pin, 1);              // Turn the LED on
    printf("LED %d is ON\n", pin); // Print the status
}

// Function to turn off an LED
void turn_off_led(uint pin)
{
    gpio_put(pin, 0);               // Turn the LED off
    printf("LED %d is OFF\n", pin); // Print the status
}

// Function to blink the LEDs in a specific sequence
void blink_led_sequence()
{
    int c = 0;
    while (c < 20)
    {
        sleep_ms(5000); // Wait for 1 second

        // Turn the LED on
        gpio_put(LED_PIN, 1);
        printf("LED is ON\n"); // Print to serial monitor
        sleep_ms(1000);        // Wait for 1 second

        // Turn the LED off
        gpio_put(LED_PIN, 0);
        printf("LED is OFF\n"); // Print to serial monitor
        sleep_ms(1000);         // Wait for 1 second

        gpio_put(LED_PIN2, 1);
        printf("LED is ON\n"); // Print to serial monitor
        sleep_ms(1000);        // Wait for 1 second

        // Turn the LED off
        gpio_put(LED_PIN2, 0);
        printf("LED is OFF\n"); // Print to serial monitor
        sleep_ms(1000);         // Wait for 1 second

        gpio_put(LED_PIN3, 1);
        printf("LED is ON\n"); // Print to serial monitor
        sleep_ms(1000);        // Wait for 1 second

        // Turn the LED off
        gpio_put(LED_PIN3, 0);
        printf("LED is OFF\n"); // Print to serial monitor
        c++;

        sleep_ms(1500); // Wait for 1 second

        // Turn the LED on
        gpio_put(LED_PIN, 1);  // Wait for 1 second
        gpio_put(LED_PIN2, 1); // Wait for 1 second
        gpio_put(LED_PIN3, 1);
        sleep_ms(2000);

        // Turn the LED off
        gpio_put(LED_PIN, 0);
        gpio_put(LED_PIN2, 0);
        gpio_put(LED_PIN3, 0);

        // Turn the LED off

        c++;
    }
}