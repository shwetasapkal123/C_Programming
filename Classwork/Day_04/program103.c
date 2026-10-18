//Day 04 - 18-10-2026 - programs on numbers
// Problem: Summation of  Factors  

#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)    
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt; // Addition of only factor
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Summation of factors : %d\n",iRet);

    return EXIT_SUCCESS;
}
//here N is input number
//if input 12 and loop move in 6 then N/2
//Time Complexity : O(N/2)
//time complexity is not fixed Its approximate.