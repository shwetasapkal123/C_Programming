/*problem stmt : Accept number from user and check whetehr it is even or odd*/

import java.util.Scanner;

class Demo{
    void CheckEven(int iNo)
    {
        if((iNo % 2) == 0)
        {
            System.out.println("Number is EVEN\n");
        }
        else
        {
            System.out.println("Number is odd\n");
        }
    }
}
public class program2_5 {
    
        public static void main(String A[])
        {
            int ivalue = 0;
            Scanner scanner = new Scanner(System.in);

            System.out.println("Enter number : ");
            ivalue = scanner.nextInt();

            Demo demo = new Demo();
            demo.CheckEven(ivalue);
        }
    
}