//Day 04 - 18-10-2026 - programs on numbers
// Problem:  factorial
#include<stdio.h>
#include<stdlib.h>

//Typedef : type means datatype def means define 
//Compiler changed unsigned long long to ULONG
//typedef include in header file
typedef unsigned long long ULONG; //macro and typedef should be in capital.
ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact =0;  
    
    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)    
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
   ULONG iRet = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %lld\n",iRet);

    return EXIT_SUCCESS;
}

