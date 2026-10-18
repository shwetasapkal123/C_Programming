//Day 04 - 18-10-2026 - programs on numbers
// Problem:  
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)    
    {
        printf("%d\n",iCnt);
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
