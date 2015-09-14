/*
Hugh Gallagher
C Programming
Cellular Automaton
*/
#include <stdio.h>
#include <stdlib.h>
#include "miniproject.h"
void print_automata(int wCurrent_State[], int wCalculated_State[], int wWidth)
{
    int kk = 0;

    for(kk = 0; kk < wWidth; kk++)
    {
        if(wCalculated_State[kk] == 1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        wCurrent_State[kk] = wCalculated_State[kk];
        if(kk == wWidth - 1)
        {
            printf("\n");
        }
    }
}
