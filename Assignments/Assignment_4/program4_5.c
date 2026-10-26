/*
Function Name : 
Description : Accept an integer and determine whether it is divisible by 5
Author : Shweta
Input : 45
Output : divisible by 5
date : 26-20-26
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CheckDivisible(iValue);
    if(iRet)
    {
        printf("Number is Divisible by 5 \n");
    }
    else{
        printf("Number is NOT divisible by 5\n");
    }
    return EXIT_SUCCESS;
}