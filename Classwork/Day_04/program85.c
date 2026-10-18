//Day 04 - 18-10-2026 - programs on numbers

// Problem: whether it is divisible by 3 and 5

/*
--------------------------------------------
            Operation &&
---------------------------------------------
    result 1        Result2     Final Result 
---------------------------------------------
    TRUE            TRUE            TRUE
    TRUE            FALSE           FALSE
    FALSE           TRUE            FALSE       //Short Circuit evaluation 
    FALSE           FALSE           FALSE       //Short Circuit
----------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //Logic
    //Short Circuit Evaluation = means 1st condition is false then not checking 2nd condition 

    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Number is divisible by 3 and 5 \n");
    }
    /*else if((iNo % 3) == 0)
    {
        printf("Number is not divisible by 3\n");
    }
    else if((iNo % 5) == 0)
    {
        printf(" Number is divisible by 5");
    }*/
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
    //return 0;
}