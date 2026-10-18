//Day 04 - 18-10-2026 - programs on numbers

// Problem: whether it is divisible/Factor by 3 and 5 without using && operator = lloks likes lenghty
//Optimize = use && operator 
//No short circuit evaluation in this code 
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //Logic
    if(((iNo % 3) == 0))
    {
        if((iNo % 5) == 0)
        {
            printf("Number is divisible by 3 and 5 \n");
        }
        else
        {
            printf("Number is NOT divisible\n");
        }
    }
    else
    {
        printf("Number is NOT divisible\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}
/* DRY Run 
iValue =7 
 execution start from 28,29 
 30 variable create and stored value 0

 took value from user 
 called method at 35 control move to 8

 checked 1st condition if true then checked 2nd condition

 if 1st condition false not checked second condition go to else block

 control at 36, 37

 informed OS code succeed 
*/