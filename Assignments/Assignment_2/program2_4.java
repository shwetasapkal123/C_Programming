//problem stmt : Accept two numbers from user & display first number in times of second number
// input 12 5
//output 12 12 12 12 12

import java.util.Scanner;

class Demo 
{
    void Display(int iNo1, int iNo2)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo2; iCnt++)
        {
            System.out.println(iNo1);
        }
    }
}
public class program2_4 {
        public static void main(String A[])
        {
            int iValue1 = 0, iValue2 = 0;

            Scanner scanner = new Scanner(System.in);

            System.out.println("Enter first number : ");
            iValue1 = scanner.nextInt();

            System.out.println("Enter second number : ");
            iValue2 = scanner.nextInt();
            
            Demo demo = new Demo();
            demo.Display(iValue1, iValue2);

        }
    
}