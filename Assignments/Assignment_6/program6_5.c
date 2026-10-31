/**
Function Name: CheckTriagnleValidity
Description : Calculate employee bonus
Author : Shweta
date : 28-10-2026
formula = (Sum of 2 sides) > third side
          
 */

 #include<stdio.h>
 #include<stdlib.h>

 float CalculateBonus(int iService, float fSalary)
 {
    float fBonus = 0.0f;

    if(iService < 0 && fSalary < 0.0)
    {
        return 0;
    }
    else if(iService < 5)
    {
        fBonus = 0.5 * fSalary;
        return fBonus;
    }
    else if(iService >= 5 && iService < 10)
    {
        fBonus = 0.10 * fSalary;
        return fBonus;
    }
    else  if(iService >= 10)
    {
        fBonus = 0.15 * fSalary ;
        return fBonus;
    }
    else{
        return 0;
    }
    
    
 }
 int main()
 {
    int iService = 0;
    float fSalary = 0.0f, fBonus = 0.0f;

    printf("Enter Years of service : \n");
    scanf("%d",&iService);

    printf("Enter Salary : \n");
    scanf("%f",&fSalary);

    fBonus = CalculateBonus(iService, fSalary);

    printf("Bonus is : %.2f",fBonus);

    return EXIT_SUCCESS;
 }