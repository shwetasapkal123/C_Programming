/*
Function Name : CheckEligibility
Description : Accept the age of person and determine whether the person eligible to vote
Author : Shweta
Input : 10 20
Output : 20
date : 26-20-26
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckEligibility(int iNo)
{
    if(iNo <= 0)
    {
        printf("invalid Age \n");
    }
    else if(iNo > 18)
    {
        printf("person is eligible for voting \n");
    }
    else if(iNo <= 18)
    {
        printf("person is NOT eligible for voting \n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the age of person : \n");
    scanf("%d",&iValue);

    CheckEligibility(iValue);

    return EXIT_SUCCESS;
}