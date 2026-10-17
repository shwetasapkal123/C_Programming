#include<stdio.h>
#include<stdlib.h>

/** 
 * Checking valid number using scanf function.
 */
int main()
{
    int number = 0, result = 0;
    printf("enter a number ");
     result = scanf("%d",&number);  // Here scanf reading the input and storing the input count in result 

    if(result != 1)     // input count number is NOT 1 then invalid
    {
        //printf("Invalid value pls enter valid input");
        fprintf(stderr,"error msg");
        return EXIT_FAILURE;
    }

    printf("valid input!!!!!!");

    return EXIT_SUCCESS;
}