 /**
Function Name:
Description : Calculate shopping discount
Author : Shweta
date : 28-10-2026
formula = purchase amout - (purchase amt * discount)
            2000    - 2000* 0.10
 */

 #include<stdio.h>
 #include<stdlib.h>

 float CalculateDiscount(float fNo)
 {
    float Discount = 0.0f, fAns = 0.0f;

    if(fNo <= 0)
    {
        return 0.0f;
    }
    else
    {
        if(fNo < 1000)
        {
            return fNo;
        }
        else if(fNo >= 1000 && fNo < 5000)
        {
            Discount = 0.10;
            fAns = fNo - (fNo * Discount);
            return fAns;
        }
        else
        {
           Discount = 0.20;
            fAns = fNo - (fNo * Discount);
            return fAns;   
        }
    }
 }
 int main()
 {
    float fPurchase = 0;
    float fRet = 0.0f;

    printf("Enter Purchase amount \n");
    scanf("%f",&fPurchase);

    fRet = CalculateDiscount(fPurchase);

    printf("Final Amount is : %.2f\n",fRet);

    return EXIT_SUCCESS;
 }