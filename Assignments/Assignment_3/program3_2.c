/*
problem stmt : take input from user and print factors of that number
Function Name: DisplayFactor
input : 24
output: 1   2   3   4   6   8   12
Author : Shweta
date: 23-10-26
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        printf("Please enter valid positive number");
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)    //1 12  2
    {
        if((iNo % iCnt) == 0)   //24%1   24%2   24%3    24%4
        {
            printf("%d \t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}