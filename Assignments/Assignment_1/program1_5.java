//problem stmt : print number of * on screen

import java.util.Scanner;

class Accept
{
    void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t");
        }
    }
}
public class program1_5 {
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter number : \n");
        iValue = scanner.nextInt();

        Accept accept = new Accept();
        accept.Display(iValue);
    }
    
}
