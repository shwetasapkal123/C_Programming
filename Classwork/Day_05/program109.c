//Day 05 - 23-10-2026 - programs on numbers
// Problem: take number from user and Check whether number is prime or Not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == 1)
    {
        return true;
    }
    else{
        return false;
    }
}
 
int main(void) // main function is not going to accept input  
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