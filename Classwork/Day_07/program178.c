/*
two types of Pattern : 1. Linear   2. Non Linear

Linear : *  *   *   *

Non Linear :        *
                *      *
             *      *      *


problems on pattern
Input : 
Output : *  *   *   *   *
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
    return EXIT_SUCCESS;
}
