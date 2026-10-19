
//problem stmt : Accept one number from user and print that number of "*" on screen

import java.util.Scanner;
class Display
{
    void DisplayStar(int iNo)
    {
        int iCnt = 1;

        while(iCnt <= iNo)
        {
            System.out.print("*\t");
            iCnt++;
        }
    }
}
class program2_1
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter number : \n");
        iValue = scanner.nextInt();

        Display display = new Display();
        display.DisplayStar(iValue);
        
    }
}