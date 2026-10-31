/**
Function Name: CheckTriagnleValidity
Description : Check Triagnle validity
Author : Shweta
date : 28-10-2026
formula = (Sum of 2 sides) > third side
          
 */

 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>

 bool CheckTriagnleValidity(int iNo1, int iNo2, int iNo3)
 {
    if(iNo1 < 0 || iNo2 < 0 || iNo3 < 0)
    {
        return false;
    }
    else if((iNo1 + iNo2) > iNo3 && (iNo1 + iNo3) > iNo2 && (iNo3 + iNo2) > iNo1)
    {
        return true;
    }
    else{
        return false;
    }
 }

 int main()
 {
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;
    bool bRet = false;

    printf("Enter first side length : \n");
    scanf("%d",&iSide1);

    printf("Enter second side length : \n");
    scanf("%d",&iSide2);

    printf("Enter third side length : \n");
    scanf("%d",&iSide3);

    bRet = CheckTriagnleValidity(iSide1, iSide2, iSide3);

    if(bRet == true)
    {
        printf("valid triangle\n");
    }
    else{
        printf("Invalid trianle\n");
    }

    return EXIT_SUCCESS;
 }