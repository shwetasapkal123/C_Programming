#include<stdio.h>
#include<stdlib.h>

//Input : 10
// 1    3   5   7   9
void Display(int iNo)
    {
         int iCnt =0;
         //iCnt++ -> iCnt = icnt +1 
         for(iCnt = 1; iCnt <= iNo; iCnt+=2)
         {
            printf("%d\t", iCnt);
         }
         printf("\n");
    }


int main()
{
  int iValue = 0;

  printf("Enter the frequency: \n");
  scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
// complexity : two complexity in program
//time complexity = if in program loop is there
//Space complexity = in program dynamic allocation is there 
//optimize code