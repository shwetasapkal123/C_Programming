//Day 04 - 18-10-2026 - programs on numbers
// Problem: Display Factors  
#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("factors of %d are : \n",iNo);
    for(iCnt = 1; iCnt < iNo/2; iCnt++)    
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}
//here N is input number
//if input 12 and loop move in 6 then N/2
//Time Complexity : O(N/2)
//time complexity is not fixed Its approximate.