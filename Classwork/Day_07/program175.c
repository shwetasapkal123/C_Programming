/*take input from user and print reverse number
input : 127
output : 721
*/

#include<stdio.h>
#include<stdlib.h>

//Digit : 100 * first +10* second + third my logic think of it

int DisplayReverse(int iNo)
{
   int iRev = 0, iDigit = 0;

   while(iNo != 0)
   {
     iDigit = iNo % 10;

     iRev = (iRev * 10) + iDigit;
     iNo = iNo/10;
   }
   return iRev;

}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = DisplayReverse(iValue);

    printf("Reverse number is : %d\n",iRet);

    return EXIT_SUCCESS;
}
