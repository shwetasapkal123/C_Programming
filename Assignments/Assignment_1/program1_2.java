//problem : program to print 5 times "Marvellous" on screen
import java.util.Scanner;

class Display
{
    static void DisplayLine(int iNo)   
    {
        int iCnt = 0;
       for(iCnt = 1; iCnt <= iNo; iCnt++)   
       {
         System.out.println("marvellous...........\n");
       }
    }
}
public class program1_2 {

    public static void main(String A[])
    {
        int iValue = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.println("enter Number : \n");
        iValue = scanner.nextInt();

        Display.DisplayLine(iValue);

    }
    
}
