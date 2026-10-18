//problem stmt : program to divide two numbers

#include<stdio.h>
#include<stdlib.h>

int Divide(int iNo1, int iNo2)
{
    int divide = 0;

    if(iNo2 == 0)
    {
        //return EXIT_FAILURE;
        return -1;
    }
    else
    {
        divide = iNo1/iNo2;
        return divide;
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second Number : \n");
    scanf("%d",&iValue2);

    iRet = Divide(iValue1, iValue2);

    printf("Division of %d and %d is : %d\n",iValue1, iValue2, iRet);

    return EXIT_SUCCESS;
}
/*
test cases

12 4

4 12

2 3

7 9

-12 4

4 -2

-8 -4 */