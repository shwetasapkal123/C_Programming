#include<stdio.h>
#include<stdlib.h>

//Input : 5
// 1+2+3+4+5= 15

//Input : 8
// 1+2+3+4+5+6+7+8= 36
/*int Display(int iNo)
    {
         int iCnt =0, result = 0;
         //iCnt++ -> iCnt = icnt +1 
         for(iCnt = 1; iCnt <= iNo; iCnt++)
         {
            //printf("%d\t", iCnt);
            result = iCnt+result;
         }
         //printf("\n");
         return result;
    }*/


int main()
{
  //int iValue = 0, iresult = 0;

  //printf("Enter the frequency: \n");
  //scanf("%d",&iValue);

    //iresult = Display(iValue);

    //printf(" Addition is %d",iresult);


    int iCnt =0;
    int iSum =0;

    //iSum = 0+1; ->1
    iSum = iSum + iCnt;
    iCnt++;  //2

    //iSum = 1+2;  ->3  
    iSum = iSum + iCnt;
    iCnt++;  //3

    //iSum = 3+3;  -> 6
    iSum = iSum + iCnt;
    iCnt++; //4

    //iSum = 6 + 4; -> 10
    iSum = iSum + iCnt;
    iCnt++; // 5

    //iSum = 10+ 5;  -> 15
    iSum = iSum + iCnt;
    iCnt++; //6

    printf("%d\n",iSum);

    return 0;
}
// complexity : two complexity in program
//time complexity = if in program loop is there
//Space complexity = in program dynamic allocation is there 
//optimize code