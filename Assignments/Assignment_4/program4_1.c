/*
Function Name : 
Description : Accept number from user and determine whether it is positive, negative or zero
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
        printf("Number is Zero\n");
    }
    else if(iNo > 0)
    {
        printf("Number is poitive\n");
    }
    else
    {
        printf("number is negatve\n");
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