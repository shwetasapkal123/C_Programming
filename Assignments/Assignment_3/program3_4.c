 /*
 Function name : Display
 Description : take input character from user and convert case of that character 
 input : a
 Output : A
 Author : Shweta Sapkal
 date : 23-10-26
 */

 #include<stdio.h>
 #include<stdlib.h>
 #include<ctype.h>

 void Display(char cVal)
 {
    if(cVal >= 'a' && cVal <= 'z')
    {
        printf("%c",toupper(cVal));
    }
    if(cVal >= 'A' && cVal <= 'Z')
    {
        printf("%c",tolower(cVal));
    }
 }
 int main()
 {
    char cValue = 0;
    
    printf("Enter character : ");
    scanf("%c", &cValue);
    Display(cValue);

    return EXIT_SUCCESS;
 }