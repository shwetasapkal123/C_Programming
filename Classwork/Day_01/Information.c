#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char name[30];
 
  printf("Enter your name: ");
    scanf("%[^'\n']s",name);
  printf("Your name is %s",name);

  return EXIT_SUCCESS;
}