/*
Hugh Gallagher
C Programming
Cellular Automaton
*/
#include <stdio.h>
#include <stdlib.h>
#include "miniproject.h"
void rule_builder(int wRule_Array[8])
{
    int rule = 0;
    int ii = 0;

    printf("Enter a rule: ");
    scanf("%d",&rule);

    printf("\n");

    for(ii = 0; ii <=7; ii++)
    {
        wRule_Array[ii]= rule % 2;

        rule = rule / 2;

        printf("%d",wRule_Array[ii]);
    }
    printf("\n");
}
