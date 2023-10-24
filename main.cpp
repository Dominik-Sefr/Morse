/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "morse.h"
#include <string>

// Blinking rate in milliseconds
#define DOT_RATE 333ms
#define DEATH_RATE 333ms
#define DASH_RATE 1000ms
#define LETTER_RATE 1000ms

int main()
{
    // Initialise the digital pin LED1 as an output

    DigitalOut led(LED1);
    
    string slovo = "dominik";
    while(true){
        blick_word_morse(slovo);
    }

}