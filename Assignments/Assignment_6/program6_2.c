 /**
Function Name:CheckEligibility
Description : Check Admission Eligibility
Author : Shweta
date : 28-10-2026
 */

 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>

 bool CheckEligibility(int iNo, float fMark)
 {
    if(iNo <= 0 && fMark <= 0 || fMark > 100)
    {
        return false;
    }
    else if(iNo >= 17 && fMark >= 60)
    {
        return true;
    }
    else{
        return false;
    }
 }

 int main()
 {
    int iAge = 0;
    float fMarks = 0.0f;
    bool bRet = false;

    printf("Enter Age : \n");
    scanf("%d",&iAge);

    printf("Enter Marks : \n");
    scanf("%f",&fMarks);

    bRet = CheckEligibility(iAge, fMarks);

    if(bRet == true)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("NOT Eligible for Admission");
    }

    return EXIT_SUCCESS;
 }