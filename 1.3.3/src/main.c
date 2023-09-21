
/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include "MEAM_general.h"  // includes the resources included in the MEAM_general.h file


int main(void) 
{ 
    
    //_clockdivide(0); //set the clock speed to 16Mhz

    float percentage = 10; // set the duty cycle to be 10%
    float number = 1023.0;   // mode 7, UP to 0x03FF (10-bit), PWM mode. 0x03FF == 1023
    float result = percentage * number; 
    int duty = (int)result; // transfer the float to int

    DDRC |= 0x40; //set port C6 as output
    TCCR3B = 0x02; //set clock of counter equal to 2MHz (i.e. set prescaler=8)

    set(TCCR3A, COM3A1); //	 clear at OCR3A, set at rollover

    set(TCCR3B, WGM32); //set timer to mode 7.
    set(TCCR3A, WGM31);
    set(TCCR3A, WGM30);

    OCR3A = duty;

    while(1){};
    return 0;

}


