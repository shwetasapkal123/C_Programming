/*
problems on pattern
Input : 5
Output : 1  2   3   4   5   
*/

#include<stdio.h>
#include<stdlib.h>
void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int ivalue = 0;

    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return EXIT_SUCCESS;
}
