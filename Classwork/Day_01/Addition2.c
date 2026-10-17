#include<stdio.h>
#include<stdlib.h> // for exit_success, exit_failure

/// Function Name: Addition
// Input : integer
// Output : Integer
//Description: perform Addition 
//date: 12-10-26
//Author : Shweta
///

/*
Step 1: Understand the program statement
step 2: write the program
step 3: Decide programming language
step 4: Write the program
step 5: test The program  */

/* step 1: user is going to enter 2 integer and we have to perform addition */

/*step 2: to write program first we have to declare reqd variables and intialized to zero
            write business logic in helper function - use kndr stype for parameter declaration
            Call it in main
            use exit_success
            
            
   step 3: we will c language  */


//Write Argument in Kndr style
int Addition(
            int value1, 
            int value2
        )
{
    int res = 0;

    res = value1 + value2;
    return res;
}

int main()
{
    int firstNumber =0, SeconfNumber =0, result =0;
    
    printf(" Enter first number ");
    scanf("%d",&firstNumber);

    printf("Enter second number ");
    scanf("%d",&SeconfNumber);

    result = Addition(firstNumber, SeconfNumber);
    printf("Addition of first number: %d and secod number %d is: %d",firstNumber, SeconfNumber, result);

    return EXIT_SUCCESS;        //this is macro
}

    