//Day 04 - 18-10-2026 - programs on numbers
// Problem: take number from user and Check whether number is Perfect or Not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)  //6
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++) // 1 ; 1 <= 3;  iCnt =1  // 2; 2 <= 3 ;
    {
        if((iNo % iCnt) == 0)   //6 % 1 ==0 // 6 % 2 =0
        {
            iSum = iSum + iCnt;     //iSum = 1+ 1 =2    // iSum = 2+2=4
        }
    }
  return (iSum == iNo);
    
}

int main()
{
    int iValue = 0, bRet = false;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("IT is Perfect number\n");
    }
    else
    {
        printf("It is NOT a Perfect Number\n");
    }

    return EXIT_SUCCESS;
}
