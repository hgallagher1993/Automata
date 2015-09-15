/*
Hugh Gallagher
C Programming
Cellular Automaton
*/

#include <stdio.h>
#include <stdlib.h>
#include "miniproject.h"

void rule_builder(int wRule_Array[8]);
void middle_of_array(int wCurrent_State[], int wWidth);
void print_automata(int wCurrent_State[], int wCalculated_State[], int wWidth);
void first_line(int wCurrent_State[], int wWidth);

void Automata_Rules()
{
    int ii = 0;
    int jj = 0;
    int Iterations = 0;
    int Width = 0;

    printf("Enter the number of Iterations: ");
    scanf("%d",&Iterations);
    printf("\n");
    printf("Enter the Width: ");
    scanf("%d",&Width);
    printf("\n");

    int Current_State[Width];
    int Calculated_State[Width];
    int Rule_Array[8];

    rule_builder(Rule_Array);   //Function to get Binary of entered rule
    middle_of_array(Current_State, Width);  //Function to place a 1 in the middle of the Current_State array

    printf("\n");

    first_line(Current_State, Width);  //Function to print out the first line of the Automata

    for(jj = 0; jj < Iterations; jj++) //Iterations = height of the automata
    {
        for(ii = 0; ii < Width; ii++)  //Cycle through each element of the Current_State array
        {
            if(ii == 0)     //If the caounter is at the start of the array
            {
                if(Current_State[Width-1] == 0 && Current_State[ii] == 0 && Current_State[ii+1] == 0)  //[000]
                {
                    Calculated_State[ii] = Rule_Array[0];
                }
                else if(Current_State[Width-1] == 0 && Current_State[ii] == 0 && Current_State[ii+1] == 1)  //[001]
                {
                    Calculated_State[ii] = Rule_Array[1];
                }
                else if(Current_State[Width-1] == 0 && Current_State[ii] == 1 && Current_State[ii+1] == 0)  //[010]
                {
                    Calculated_State[ii] = Rule_Array[2];
                }

                else if(Current_State[Width-1] == 0 && Current_State[ii] == 1 && Current_State[ii+1] == 1)  //[011]
                {
                    Calculated_State[ii] = Rule_Array[3];
                }

                else if(Current_State[Width-1] == 1 && Current_State[ii] == 0 && Current_State[ii+1] == 0)  //[100]
                {
                    Calculated_State[ii] = Rule_Array[4];
                }

                else if(Current_State[Width-1] == 1 && Current_State[ii] == 0 && Current_State[ii+1] == 1)  //[101]
                {
                    Calculated_State[ii] = Rule_Array[5];
                }

                else if(Current_State[Width-1] == 1 && Current_State[ii] == 1 && Current_State[ii+1] == 0)  //[110]
                {
                    Calculated_State[ii] = Rule_Array[6];
                }
                else if(Current_State[Width-1] == 1 && Current_State[ii] == 1 && Current_State[ii+1] == 1)  //[111]
                {
                    Calculated_State[ii] = Rule_Array[7];
                }
            }
            if(ii == 14)    //If the counter has reached the end of the array
            {
                 if(Current_State[ii-1] == 0 && Current_State[ii] == 0 && Current_State[0] == 0)  //[000]
                {
                    Calculated_State[ii] = Rule_Array[0];
                }

                else if(Current_State[ii-1] == 0 && Current_State[ii] == 0 && Current_State[0] == 1)  //[001]
                {
                    Calculated_State[ii] = Rule_Array[1];
                }
                else if(Current_State[ii-1] == 0 && Current_State[ii] == 1 && Current_State[0] == 0)  //[010]
                {
                    Calculated_State[ii] = Rule_Array[2];
                }

                else if(Current_State[ii-1] == 0 && Current_State[ii] == 1 && Current_State[0] == 1)  //[011]
                {
                    Calculated_State[ii] = Rule_Array[3];
                }

                else if(Current_State[ii-1] == 1 && Current_State[ii] == 0 && Current_State[0] == 0)  //[100]
                {
                    Calculated_State[ii] = Rule_Array[4];
                }

                else if(Current_State[ii-1] == 1 && Current_State[ii] == 0 && Current_State[0] == 1)  //[101]
                {
                    Calculated_State[ii] = Rule_Array[5];
                }

                else if(Current_State[ii-1] == 1 && Current_State[ii] == 1 && Current_State[0] == 0)  //[110]
                {
                    Calculated_State[ii] = Rule_Array[6];
                }
                else if(Current_State[ii-1] == 1 && Current_State[ii] == 1 && Current_State[0] == 1)  //[111]
                {
                    Calculated_State[ii] = Rule_Array[7];
                }
            }

            /*Counter is in the middle of the array*/

            if(Current_State[ii-1] == 0 && Current_State[ii] == 0 && Current_State[ii+1] == 0)  //[000]
            {
                Calculated_State[ii] = Rule_Array[0];
            }

            else if(Current_State[ii-1] == 0 && Current_State[ii] == 0 && Current_State[ii+1] == 1)  //[001]
            {
                Calculated_State[ii] = Rule_Array[1];
            }
            else if(Current_State[ii-1] == 0 && Current_State[ii] == 1 && Current_State[ii+1] == 0)  //[010]
            {
                Calculated_State[ii] = Rule_Array[2];
            }

            else if(Current_State[ii-1] == 0 && Current_State[ii] == 1 && Current_State[ii+1] == 1)  //[011]
            {
                Calculated_State[ii] = Rule_Array[3];
            }

            else if(Current_State[ii-1] == 1 && Current_State[ii] == 0 && Current_State[ii+1] == 0)  //[100]
            {
                Calculated_State[ii] = Rule_Array[4];
            }

            else if(Current_State[ii-1] == 1 && Current_State[ii] == 0 && Current_State[ii+1] == 1)  //[101]
            {
                Calculated_State[ii] = Rule_Array[5];
            }

            else if(Current_State[ii-1] == 1 && Current_State[ii] == 1 && Current_State[ii+1] == 0)  //[110]
            {
                Calculated_State[ii] = Rule_Array[6];
            }
            else if(Current_State[ii-1] == 1 && Current_State[ii] == 1 && Current_State[ii+1] == 1)  //[111]
            {
                Calculated_State[ii] = Rule_Array[7];
            }
        }
        print_automata(Current_State, Calculated_State, Width); //Function to print the cellular Automata
    }
}
