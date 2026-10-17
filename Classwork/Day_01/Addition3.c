#include "Header.h"

int main()
{
    int iFirstvalue = 0, iSecondvalue =0, iResult =0;

    printf("enter first whole integer number: ");
    scanf("%d",&iFirstvalue);

    printf("Enter second whole integer number: ");
    scanf("%d", &iSecondvalue);

    iResult = Addition(iFirstvalue, iSecondvalue);

    printf("Addition of first number %d secondNumber %d is %d",iFirstvalue,iSecondvalue,iResult);

    return EXIT_SUCCESS;
}