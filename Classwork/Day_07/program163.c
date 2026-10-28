//Day 07 - 25-20-2026 
//problems on Digits : Take a input from user and Display even Digits
//input : 8967      4268
//output : 8  6       8 6  2  4

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigits(int iNo)
{
    int iDigit = 0;
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;    //reminder  

      // here we will write logic 
        if((iDigit % 2) == 0)
        {
            printf("%d\n",iDigit);
        }

        iNo = iNo/10;       //Divider

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

    return EXIT_SUCCESS;
}