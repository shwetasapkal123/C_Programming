/*
Function Name : CheckGreater
Description : Accept 2 numbers from user and determine which number is greater
Author : Shweta
Input : 10 20
Output : 20
date : 26-20-26
*/

#include<stdio.h>
#include<stdlib.h>

int CheckGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else if(iNo1 < iNo2)
    {
        return iNo2;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iRet = CheckGreater(iValue1,iValue2);

    if(iRet == 0)
    {
        printf("Numbers are equal\n ");
    }
    else{
        printf(" Greater number is : %d \n",iRet);
    }

    return EXIT_SUCCESS;
}