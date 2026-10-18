//Day 04 - 18-10-2026 - programs on numbers
// Problem:  sum of numbers from 1 to user number 
#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iCnt = 0, iSum =0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)    
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is: %d\n",iRet);

    return EXIT_SUCCESS;
}
/* Stack Layout 

    stack                   OS
    --------------
        iValue            main
        iRet
    --------------

                        Summation
    ----------------
*/
