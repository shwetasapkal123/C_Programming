/*
input : 8967
output : 
    odd : 7
    Even : 6
    odd : 9
    even : 8
    even : 4
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
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
        if((iDigit % 2) != 0)
        {
            printf("odd : %d\n",iDigit);
        }
        else
        {
            printf("even : %d\n",iDigit);
        }

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