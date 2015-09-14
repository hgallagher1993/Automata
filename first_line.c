/*
Hugh Gallagher
C Programming
Cellular Automaton
*/

#include <stdio.h>
#include <stdlib.h>
#include "miniproject.h"
void first_line(int wCurrent_State[], int wWidth)
{
    int ii = 0;

    for(ii = 0; ii < wWidth; ii++)
    {
        if(wCurrent_State[ii] == 1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        if(ii == wWidth - 1)
        {
            printf("\n");
        }
    }
}
