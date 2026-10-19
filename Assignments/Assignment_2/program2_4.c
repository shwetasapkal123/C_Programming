//problem stmt : Accept two numbers from user & display first number in times of second number
// input 12 5
//output 12 12 12 12 12

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 1;
    while(iCnt <= iNo2)
    {
        printf("%d\t",iNo1);
        iCnt++;
    }
    // for(iCnt = 1; iCnt <= iNo2; iCnt++)
    // {
    //     printf("%d\t",iNo1);
    // }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return EXIT_SUCCESS;
}