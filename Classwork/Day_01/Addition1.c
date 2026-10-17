#include<stdio.h>   //standard input output header file
//Write addition code using business logic 
//As per business logi we need o write logic inside helper/class so whenever reqd we can use in main file

/// Function Name: Addition
// Input : integer
// Output : Integer
//Description: perform Addition 
//date: 12-10-26
//Author : Shweta
///

//Helper Method -(helper functons written in dll/so/DILIB)
//helper functions/method does not take input from user
int Addition(int no1, int no2)
{
        int result;
        //business logic
    result = no1 + no2;
    return result;
}

//Entry point Functions
int main()
{
    //use variable nameing convenstion meaningful
    int firstnumber=0, secondNumber=0, result =0;
    //take input from user
    printf("Enter first Number: ");
    //Store input value in variable
    scanf("%d",&firstnumber);

    printf("Enter second number: ");
    scanf("%d",&secondNumber);

    //Call helper function
    result = Addition(firstnumber,secondNumber);

    printf("Addition of %d and %d is: %d", firstnumber,secondNumber,result);

    return 0;
}
