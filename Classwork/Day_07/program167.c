/*
Display count of digits
input : 8967
output : 4
*/
#include<stdio.h>
#include<stdlib.h>

int DisplayCountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
       //logic
        iCount++;
        iNo = iNo/10;      
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DisplayCountDigits(iValue);

    printf("Count of digits: %d\n",iRet);

    return EXIT_SUCCESS;
}