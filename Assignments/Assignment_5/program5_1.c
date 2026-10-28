/*
Function Name : CheckGreatestNumber
Description : Accept 3 integers number and determine the greatest number among three
Author : Shweta
date : 26-10-26
*/
#include<stdio.h>
#include<stdlib.h>

void CheckGreatestNumber(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 == iNo2) && (iNo2 == iNo3))
    {
        printf("Numbers are equal \n");
    }
    else if((iNo1 > iNo2) && (iNo1 > iNo3))
    {        
       printf("Greater number is : %d\n",iNo1);       
    }
    else if(iNo2 > iNo3)
    {
        printf("greater number is : %d\n",iNo2);
    }
    else
    {
        printf("Greater number is : %d\n",iNo3);
    }
}

int main()
{
    int iValue1 = 0, ivalue2 = 0, iValue3 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&ivalue2);

    printf("Enter third number : \n");
    scanf("%d",&iValue3);

    CheckGreatestNumber(iValue1, ivalue2, iValue3);

    return EXIT_SUCCESS;
}