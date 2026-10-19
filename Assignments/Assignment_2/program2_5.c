/*problem stmt : Accept number from user and check whetehr it is even or odd*/

#include<stdio.h>
#include<stdlib.h>

// void CheckEven(int iNo)
// {
//     if((iNo % 2) == 0)
//     {
//         printf("Number is EVEN\n");
//     }
//     else
//     {
//         printf("Number is odd\n");
//     }
// }
typedef int bool;
#define true 1
#define false 0

int CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CheckEven(iValue);

    if(iRet == 1)
    {
        printf("Number is EVEn");
    }
    else{
        printf("Number is odd");
    }
    
    return EXIT_SUCCESS;
}