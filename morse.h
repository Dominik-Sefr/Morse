#include <string>
#include "mbed.h"
#define DOT_RATE 333ms
#define DEATH_RATE 333ms
#define DASH_RATE 1000ms
#define LETTER_RATE 1000ms
#define WORD_RATE 2300ms

void blick_word_morse(string in_word);
void S(DigitalOut led);
void D(DigitalOut led);
void O(DigitalOut led);
void M(DigitalOut led);
void I(DigitalOut led);
void N(DigitalOut led);
void I(DigitalOut led);
void K(DigitalOut led);
