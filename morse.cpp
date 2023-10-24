#include "morse.h"
#include <cctype>
void D(DigitalOut led){
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);//zap carka
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);//vyp
    led = 0; 
    ThisThread::sleep_for(DOT_RATE);//zap tecka
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);//vyp
    led = 0; 
    ThisThread::sleep_for(DOT_RATE);//zap tecka
    led = 1;
    ThisThread::sleep_for(LETTER_RATE);//vyp pismeno
}
void O(DigitalOut led){
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);
    led = 1;
    ThisThread::sleep_for(LETTER_RATE);
}
void M(DigitalOut led){
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);
    led = 1;
    ThisThread::sleep_for(LETTER_RATE);
}
void I(DigitalOut led){
    led = 0; 
    ThisThread::sleep_for(DOT_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0; 
    ThisThread::sleep_for(DOT_RATE);
    led = 1;
    ThisThread::sleep_for(LETTER_RATE);
}
void N(DigitalOut led){
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0; 
    ThisThread::sleep_for(DOT_RATE);
    led = 1;
    ThisThread::sleep_for(LETTER_RATE);
}
void K(DigitalOut led){
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0; 
    ThisThread::sleep_for(DOT_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0; 
    ThisThread::sleep_for(DASH_RATE);
    led = 1;
    ThisThread::sleep_for(LETTER_RATE);
}
void S(DigitalOut led){
    led = 0;
    ThisThread::sleep_for(DOT_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0;
    ThisThread::sleep_for(DOT_RATE);
    led = 1;
    ThisThread::sleep_for(DEATH_RATE);
    led = 0;
    ThisThread::sleep_for(DOT_RATE);
    led = 1;
    ThisThread::sleep_for(LETTER_RATE);
}
void blick_word_morse(string in_word, DigitalOut led){
    for(int i = 0; i < sizeof(in_word); i++){
        if(tolower(in_word[i]) == 'd'){
            D(led);
        }
        else if(tolower(in_word[i]) == 'o'){
            O(led);
        }
        else if(tolower(in_word[i]) == 'm'){
            M(led);
        }
        else if(tolower(in_word[i]) == 'i'){
            I(led);
        }
        else if(tolower(in_word[i]) == 'n'){
            N(led);
        }
        else if(tolower(in_word[i]) == 'k'){
            K(led);
        }
        else if(tolower(in_word[i]) == 's'){
            S(led);
        }
    }
}