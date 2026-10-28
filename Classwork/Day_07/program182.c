/*
problems on pattern
Input : 
Output : $  $   $   $
*/

#include<stdio.h>
#include<stdlib.h>
void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
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
