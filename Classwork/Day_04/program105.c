//Day 04 - 18-10-2026 - programs on numbers
// Problem: take number from user and Check whether number is perfect or Not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)    
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt; 
        }
    }
    if(iSum == iNo)
    {
        return true;

    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0, bRet = false;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("IT is Perfect number\n");
    }
    else
    {
        printf("It is NOT a Perfect Number\n");
    }

    return EXIT_SUCCESS;
}
