//problem stmt : check number whether it is divisible by 5 or not 

import java.util.Scanner;

class Division
{
    static boolean Divisible(int iNo)
    {
        if((iNo % 5) == 0)
        {
            return true;
        }
        return false;
    }
}
public class program1_4 {
    public static void main(String A[])
    {
        int ivalue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);

        System.out.println("enter Number : \n");
        ivalue = scanner.nextInt();

        bRet = Division.Divisible(ivalue);

        if(bRet == true)
        {
            System.out.println("Number is divisible by 5\n");
        }
        else{
            System.out.println("Number is NOT divisible by 5\n");
        }
    }
    
}
