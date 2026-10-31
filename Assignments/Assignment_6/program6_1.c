/**
Function Name:
Description : calculate electricity bill
Author : Shweta
date : 28-10-2026
 */

 #include<stdio.h>
 #include<stdlib.h>
 int CalculateBill(int iNo)
 {
    int iCnt = 0, iRet = 0;
    if(iNo < 0)
    {
        return 0;
    }
    else if(iNo <= 100)
    {
        iRet = (iNo * 5);
        return iRet;
    }
    else if(iNo > 100 && iNo <= 200)
    {
        iRet = (100 * 5) + ((iNo - 100) * 7);
    }
    else
    {
        iRet = (iNo * 10);
    }
 }

 int main()
 {
    int iUnits = 0,iAns = 0;

    printf("Enter electricity unit : \n");
    scanf("%d",&iUnits);

    iAns = CalculateBill(iUnits);

    if(iAns == 0)
    {
        printf("Invalid value\n");
    }
    else
    {
        printf("Electricity bill is : %d\n",iAns);
    }
    return EXIT_SUCCESS;
 }