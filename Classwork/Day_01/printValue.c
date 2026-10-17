#include<stdio.h>
#include<stdlib.h>

int main()
{
    int result =0;

    result = printf("ABC\t\n");
    //printf give us count of characters used inside " "
    printf("value of result is %d",result);

    //Will check what value will return by scanf
    int number =0;
    printf("\nEnter value ");
    result = scanf("%d",&number);

    printf("value of scanf is %d",result);
    //Enter all values one by one and check result int, float, double, char
    return EXIT_SUCCESS;

}