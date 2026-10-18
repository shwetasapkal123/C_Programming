//Day 04 - 18-10-2026 - programs on numbers
// Problem:  factorial
#include<stdio.h>
#include<stdlib.h>

//used long int datatype 
long int Factorial(int iNo)
{
    int iCnt = 0;
    long int iFact =0;  //Changed datatype 
    
    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)    
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    //Format specifier for long is %ld
    printf("Factorial is: %ld\n",iRet);

    return EXIT_SUCCESS;
}
//Test Case
// 20
// result in minus
