/*
 * File:   main.c
 * Author: 21192692
 *
 * Created on 14 de Maio de 2021, 16:29
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"

void main(void) {
    
    char estado = 0;
    char tecla = 0;
    dispLCD_init();
    teclado_init();
    while ( 1 )
    {
        tecla = teclado();
        switch ( estado )
        {
            case 0:
                estado = 1;
                break;
            case 1:
                    dispLCD(0,0,"Ola gatinhos    ")
                    delay ( 3000 );
                    estado = 10;
                    break;
            case 10:
                dispLCD(0,0,"alices          ")
                dispLCD(0,0,"1:wpp  2:insta  ")
                if ( tecla == '1')
                    estado = 20
                if ( tecla == '2')
                    estado == 100
                    break;
            case 20:
                dispLCD(1,0,"                ")
                dispLCD(0,0,"1191234567      ")
                if ( tecla == '*')
                     estado = 10;
            case 100:
                dispLCD(1,0,"                ")
                dispLCD(0,0,"licefreitas     ")
                if (tecla == '*')
                    estado = 10
                    break;        
                                      
        }
    }    
}
