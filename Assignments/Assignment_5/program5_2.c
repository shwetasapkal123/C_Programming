/*
Function Name : 
Description : Accept a year and determine whether it is leap year or not
Author : Shweta
date : 26-10-26
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CountDigit(int iNo)
{
    int iDigit = 0, iCount =0;
    if(iNo <= 0)
    {
        iNo = 0;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo/10;
    }

    if(iCount == 4)
    {
        return true;
    }
    else{
        return false;
    }
}
bool CheckLeapyear(int iNo)
{
    // if(iNo <= 0)
    // {
    //     printf("Please enter valid input\n");
    // }
    // else if((iNo % 4) == 0)
    // {
    //     printf("Year is Leap year\n");
    // }
    // else{
    //     printf("Year is NOT Leap\n");
    // }
    bool bRet = false;
    int ioriginal = iNo;
    bRet = CountDigit(iNo);

    if((CountDigit(iNo)) && iNo != 0)
    {
        if((ioriginal % 4) == 0 || (ioriginal % 400) == 0)
        {
            return true;
        }
        else if((ioriginal % 100) == 0)
        {
            return false;
        }
        else
        {
            return false;
        }
    }
    else{
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bAns = false;

    printf("Enter year : \n");
    scanf("%d",&iValue);

    bAns = CheckLeapyear(iValue);

    if(bAns)
    {
        printf("Year is Leap year\n");
    }
    else{
        printf("Year is NOT Leap year\n");
    }

    return EXIT_SUCCESS;
}