/*
Display count of digits
input : 6457    sum = 22        logic = sum/count
output : 

input : 734     sum = 14
output : 4
*/
#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iSum = 0;
    float fRet = 0;
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
        iSum = iSum + iDigit;        
        iNo = iNo/10;      
    }
    fRet = iSum/iCount;
    return fRet;
}

int main()
{
    int iValue = 0;
    float iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = AverageDigits(iValue);

    printf("Average of digits is  : %f\n",iRet);

    return EXIT_SUCCESS;
}