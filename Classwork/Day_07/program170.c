/*Calculate avearge of digits
formula avg = iSum/(count of digit)*/

#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0, iCount = 0,iSum = 0;
    float fRet = 0.0;
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

    printf("Average of digits is  : %f\n",iRet);

    return EXIT_SUCCESS;
}