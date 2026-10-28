//Day 07 - 25-20-2026 
//problems on Digits : Take input from user and Display Digits

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;    //reminder  

        printf("%d\n",iDigit);  // here we will write logic 

        iNo = iNo/10;       //Divider

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}