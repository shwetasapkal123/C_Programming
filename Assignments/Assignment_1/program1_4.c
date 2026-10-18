//problem stmt : check number whether it is divisible by 5 or not 

#include<stdio.h>
#include<stdlib.h>

typedef int bool;
#define true 1
#define false 0

int Divisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Divisible(iValue);

    if(iRet == 1)
    {
        printf("Number divisible by 5\n");
    }
    else{
        printf("Number is NOT divisible by 5\n");
    }

    return EXIT_SUCCESS;
}