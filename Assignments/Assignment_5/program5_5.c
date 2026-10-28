/*
Function Name : 
Description : identify character type
Author : Shweta
date : 28-10-26
*/

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cLetter)
{
    if(cLetter >= 'A' && cLetter <= 'Z')
    {
        printf("Upper Case\n");
    }
    else if(cLetter >= 'a' && cLetter <= 'z')
    {
        printf("Lower Case\n");
    }
    else if(cLetter >= '0' && cLetter <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}