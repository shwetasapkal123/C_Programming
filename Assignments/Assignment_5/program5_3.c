/*
Function Name : DisplayGrade
Description : Accept the marks of student out of 100 and display the grade
Author : Shweta
date : 28-10-26
*/

#include<stdio.h>
#include<stdlib.h>
void DisplayGrade(float fNo)
{
    if(fNo < 0 || fNo > 100)
    {
        printf("Invalid input. Enter correct values\n");
    }
    else if(fNo >= 90 && fNo <= 100)
    {
        printf("Grade : A\n");
    }
    else if(fNo >= 75 && fNo <= 89)
    {
        printf("Grade : B\n");
    }
    else if(fNo >= 60 && fNo <= 74)
    {
        printf("Grade : C\n");
    }
    else if(fNo >= 40 && fNo <= 59)
    {
        printf("Grade : D\n");
    }
    else if(fNo < 40)
    {
        printf("Grade : Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}