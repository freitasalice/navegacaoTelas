/*
 * File:   delay.c
 * Author: 21192692
 *
 * Created on 4 de Fevereiro de 2021, 16:29
 */

#include "delay.h"
#include <xc.h>

void delay ( int t) 
{
    while (t)
    {
        --t;
        __delay_ms (1);
    }
}
