//problem stmt: program to print 5 to 1 numbers on screen

import java.util.Scanner;

class Display{
    static void DisplayNumber(int iNo)
    {
        int iCnt = iNo;
        // for(iCnt = iNo; iCnt >= 1; iCnt--)
        // {
        //     System.out.println(iCnt);
        // }
        while (iCnt >= 1) {
            System.out.println(iCnt);
            iCnt--;
        }
    }
}
public class program1_3 {

    public static void main(String A[])
    {
        int ivalue = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter number : \n");
        ivalue = scanner.nextInt();

        Display.DisplayNumber(ivalue);
    }
    
}
