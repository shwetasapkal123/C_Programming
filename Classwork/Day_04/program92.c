//Day 04 - 18-10-2026 - programs on numbers
// Problem:  factorial
#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact =0;
    // Just added ifact initialization in for loop. two values in first place of for loop
    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)    
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %d\n",iRet);

    return EXIT_SUCCESS;
}

