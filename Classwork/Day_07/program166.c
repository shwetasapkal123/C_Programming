/*
input : 6459
output : 24
*/
#include<stdio.h>
#include<stdlib.h>

int DisplaySumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
       //logic
        iSum = iSum + iDigit;
        iNo = iNo/10;      
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DisplaySumDigits(iValue);

    printf("Summation of digits: %d\n",iRet);

    return EXIT_SUCCESS;
}