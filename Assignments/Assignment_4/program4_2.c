/*
Function Name : 
Description : Accept number from user and determine whether it is even or odd
Author : Shweta
Input : 15
Output : Positive
date : 24-20-26
*/

#include<stdio.h>
#include<stdlib.h>
void CheckNumber(int iNo)
{
    if(iNo == 0)
    {
        printf("number is zero\n");
    }
    else if((iNo %2) == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);


    return EXIT_SUCCESS;
}