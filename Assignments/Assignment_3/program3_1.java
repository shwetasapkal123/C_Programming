//problem Stmt: Write a program which accept one number from user and print that number of even numbers on screen
//Input : 7
//output :  2   4   6   8   10  12  16

import java.util.Scanner;

/**
 * program3_1 
 * Author : Shweta
 * Description : Taking input from user and printing that number of even numbers on screen
 * date : 23-10-26
 */
class Display
{
    void EvenNumber(int iNo)
    {
        int iCnt = 0, iNum = 1;
        for(iCnt = 1; iCnt <= iNo;iCnt++)   //1  1<=7  2
        {
            iNum = iCnt*2;      //inum= 1*2   2*2
            System.out.println(iNum);
        }
    }
}
public class program3_1 {

    public static void main(String A[])
    {
        int iValue = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = scanner.nextInt();
        Display display = new Display();
        display.EvenNumber(iValue);
        
    }
}
