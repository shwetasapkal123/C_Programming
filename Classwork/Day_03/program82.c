#include<stdio.h>
#include<stdlib.h>

//Input : 10
// 1    3   5   7   9
int Summation(int iNo)
    {
         int iCnt =0;
          int iSum =0;

          iSum =1;
         for(iCnt = 1; iCnt <= iNo; iCnt++)
         {
            iSum = iCnt * iSum;
         }

         return iSum;
    }


int main()
{
  int iValue = 0;
    int iResult = 0;

  printf("Enter the frequency: \n");
  scanf("%d",&iValue);

  iResult = Summation(iValue);

  printf("Addition is:  %d",iResult);
    return 0;
}
