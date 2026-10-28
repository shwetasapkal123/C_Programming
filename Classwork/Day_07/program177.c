/*take input from user and check whether number is palindrome or not
input : 8998        7007        14341
output : 8998       7007        14341
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Digit : 100 * first +10* second + third my logic think of it

bool CheckPallindrome(int iNo)
{
   int iRev = 0, iDigit = 0;
   int ioriginal = iNo; // temporary variable

   while(iNo != 0)
   {
     iDigit = iNo % 10;

     iRev = (iRev * 10) + iDigit;
     iNo = iNo/10;
   }

   if(iRev == ioriginal)    //if(iRev == iNo)   issue iNo value is changing in while loop getting zero 
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
    int iValue = 0 ;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("It is PALINDROME \n");
    }
    else{
        printf("It is NOT palindrome");
    }

    return EXIT_SUCCESS;
}
