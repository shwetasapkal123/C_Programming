//Day 04 - 18-10-2026 - programs on numbers

// Problem: whether it is divisible by 3
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //Logic
    if((iNo % 3) == 0)
    {
        printf("Number is divisible by 3\n");
    }
    else
    {
        printf("Number is not divisible by 3\n");
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