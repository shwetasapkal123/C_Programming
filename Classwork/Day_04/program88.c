//Day 04 - 18-10-2026 - programs on numbers
//Any for can be converted into while
//Any while can be converted into for
// Problem:  
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    for(iCnt = 1; iCnt <= iValue; iCnt++)    
    {
        printf("%d\n",iCnt);
    }

    return EXIT_SUCCESS;
}
