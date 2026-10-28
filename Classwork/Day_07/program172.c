/*Calculate avearge of digits
formula avg = iSum/(count of digit)*/

//all language return only 1 values of function  except python 
//how to return multiple values?
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

float AverageDigits(int iNo)
{
    int iDigit = 0, iCount = 0,iSum = 0;
    float fRet = 0.0;
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iSum = DisplaySumDigits(iNo);
    iCount = DisplayCountDigits(iNo);
    fRet = (float)iSum/(float)iCount; // typecasting
    return fRet;
}

int main()
{
    int iValue = 0;
    float iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = AverageDigits(iValue);

    printf("Average of digits is  : %.2f\n",iRet);  //width specifier = after decimal show 2 digits

    return EXIT_SUCCESS;
}
/*
OS calls -> main() -> AverageDigits()- calls ->DisplayCountDigits, DisplaySumDigits
         <-        <-                        <-
         
         bidirectional 
         
         time complexity is double in this program bcz all functions run 4 times for 6754
         
         To reduce time complexity reduce loops/iterations. To reduce time complexity in this program just use only 1 function AverageDigits.
         
         */