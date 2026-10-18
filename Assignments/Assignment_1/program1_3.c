//problem : program to print 5 to 1 numbers on screen

#include<stdio.h>
#include<stdlib.h>
void DisplayNumber(int iNo)
{
    int iCnt = iNo;

    // for(iCnt = iNo; iCnt >= 1; iCnt--)
    // {
    //     printf("%d\n",iCnt);
    // }
    while (iCnt >= 1) {
            System.out.println(iCnt);
            iCnt--;
        }
}
int main()
{
    int iValue = 0;

    printf("Enter number :  \n");
    scanf("%d",&iValue);

    DisplayNumber(iValue);

    return EXIT_SUCCESS;
}