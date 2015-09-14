/*
Hugh Gallagher
C Programming
Cellular Automaton
*/
#include "miniproject.h"
void middle_of_array(int wCurrent_State[], int wWidth)
{
    int ii = 0;

    for(ii = 0; ii <= wWidth; ii++)
    {
        if(ii == (wWidth/2))
        {
            wCurrent_State[ii] = 1;
        }
        else
        {
            wCurrent_State[ii] = 0;
        }
    }
}
