//problem Stmt: Write a program which accept one number from user and print that number of even numbers on screen
//Input : 7
//output :  2   4   6   8   10  12  16

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0,   iNum =1;
    if(iNo <= 0)    //7
    {
        printf("Input is invalid. Please Enter positive number");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)  // 1    1<= 7   2
    {
        iNum= iCnt*2;
        printf("%d \t",iNum);
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}