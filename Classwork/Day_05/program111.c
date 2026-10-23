//Day 05 - 23-10-2026 - programs on numbers
// Problem: take number from user and Check whether number is prime or Not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)    //13
{
    int iCnt = 0;
    //Do NOT write false/true inside loop bcz instruction queue get block(choke up)
    for(iCnt = 2; iCnt <= iNo/2; iCnt++)    // 2  13/2= 6   
    {
        if((iNo % iCnt) == 0)   //13%2 
        {
            return false;
        }
    }
    return true;
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