//Day 05 - 23-10-2026 - programs on numbers
// Problem: take number from user and Check whether number is prime or Not
//Using Flag
//write code without using flag 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo) 
{   
    int iCnt = 0;
    bool bFlag = false; //Default value should be false
   
    for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++)     
    {
        if((iNo % iCnt) == 0)   
        {
            bFlag = false;
            break;
        }
    }
   return bFlag;
   
}
 
int main(void)   
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet)
    {
        printf("It is Prime Number\n");
    }
    else
    {
        printf("It is NOT a prime number\n");
    }

    return EXIT_SUCCESS;
}