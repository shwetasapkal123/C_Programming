/*
Function Name : CheckDivisibility
Description : Check divisibility by 3 and 5
Author : Shweta
date : 28-10-26
*/

#include<stdio.h>
#include<stdlib.h>
void CheckDivisibility(int iNo)
{
    if((iNo % 3) == 0 && (iNo % 5) == 0)
    {
        printf("Number divisible by both 3 and 5\n");
    }
    else if((iNo % 3) == 0)
    {
        printf("Number divisible by 3\n");
    }
    else if((iNo % 5) == 0)
    {
        printf("Number divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}