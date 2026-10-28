/*Calculate avearge of digits
formula avg = iSum/(count of digit)*/

//all language return only 1 values of function  except python 
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

    printf("Average of digits is  : %.2f\n",iRet);  //width specifier = after decimal show 2 digits

    return EXIT_SUCCESS;
}
/*
Divide and concure : divide code and then collect in one frame
Dry Run: 
while(iNo != 0)
    {
        iDigit = iNo % 10; 
       //logic
        iCount++;
        iSum = iSum + iDigit;  

        iNo = iNo/10;      
    }

    iNo : 79821             7982        798         79      7       0
    iDigit : 0      1       2           8           9       7       
    iSum : 0        1       3           11          20      27
    iCount : 0      1       2           3           4       5
    fRet : 0.0                                                      27/5=5.40
*/