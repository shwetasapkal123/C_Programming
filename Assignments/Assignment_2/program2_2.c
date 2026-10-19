//problem stmt : Accept one number from user and print that number of "*" on screen (decrement operator)

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
