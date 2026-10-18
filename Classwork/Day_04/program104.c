//Day 04 - 18-10-2026 - programs on numbers
// Problem: take number from user and Check whether number is perfect or Not

#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
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
        printf("It is Perfect Number\n");

    }
    else
    {
        printf("it is NOT Perfect Number\n");
    }
}

int main()
{
    int iValue = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}
