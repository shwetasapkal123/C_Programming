//problem stmt : program to divide two numbers

import java.util.Scanner;

class Division
{
    public static int DivideNumber(int iNo1, int iNo2)
    {
        int iDiv = 0;
        if(iNo2 == 0)
        {
            return  -1;
        }
        iDiv = iNo1/iNo2;
        return iDiv;
    }
}
class Assignment_Que_1
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 =0, iRet = 0;
        
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter first number : \n");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second Number : \n");
        iValue2 = scanner.nextInt();

       iRet = Division.DivideNumber(iValue1,iValue2);
       System.out.println("Division is : "+ iRet);
    }
}

