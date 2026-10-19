//problem stmt : Accept one number from user and print that number of "*" on screen
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
    }
}
int main()
{ 
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    if(iValue < 0)
    {
        printf("Invalid number. Please enter correct input");
    }
    Display(iValue);

    return EXIT_SUCCESS;
}