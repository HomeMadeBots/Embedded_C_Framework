#ifndef MICROCONTROLLER_DELAY_H
#define MICROCONTROLLER_DELAY_H


#ifdef ARDUINO
    #include "Arduino.h"
    #define Wait_Microsecond( us ) delayMicroseconds( us )
#else
    #error "Wait_xxx not implemented."
#endif

#endif