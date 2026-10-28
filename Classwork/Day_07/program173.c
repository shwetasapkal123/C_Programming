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

int main()
{
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    //reusability of sum, count digits function
    iSum = DisplaySumDigits(iValue);
    iCount = DisplayCountDigits(iValue);

    fAvg = (float)iSum/(float)iCount; // typecasting

    printf("Number of digits : %d\n",iCount);
    printf("Summation of digits is : %d\n",iSum);
    printf("Average of digits is  : %.2f\n",fAvg);  

    return EXIT_SUCCESS;
}
