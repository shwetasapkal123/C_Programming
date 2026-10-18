//Day 04 - 18-10-2026 - programs on numbers

// Problem: whether it is divisible by either 3 or 5

/*
--------------------------------------------
            Operation ||
---------------------------------------------
    result 1        Result2     Final Result 
---------------------------------------------
    TRUE            TRUE            TRUE            Short Circuit (SC) Evaluation
    TRUE            FALSE           TRUE            Short Circuit  Evaluation
    FALSE           TRUE            TRUE            
    FALSE           FALSE           FALSE      
----------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //Logic
    //  |  bitwise OR 
    //  || logical OR
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("Number is divisible by 3 and 5 \n");
    }
    else
    {
        printf("Number is Not divisible\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}