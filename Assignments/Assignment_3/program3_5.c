/*
 Function name : 
 Description : take input character from user and check whether that character is vowel or not 
 input : E
 Output : true
 Author : Shweta Sapkal
 date : 23-10-26
 */

 #include<stdio.h>
 #include<stdlib.h>
#include<stdbool.h>

 bool Display(char cVal)
 {
    if(cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u' || cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
    {
        return true;   
    }
    else
    {
        return false;
    }
    
 }
 int main()
 {
    char cValue = 0;
    bool bRet = false;
    
    printf("Enter character : ");
    scanf("%c", &cValue);
    bRet = Display(cValue);

    if(bRet == true)
    {
        printf("character is vowel");
    }
    else{
        printf("character is consonant");
    }
    return EXIT_SUCCESS;
 }