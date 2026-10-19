

import  java.util.Scanner;

class Demo
{
    static void Display(int iNo)
    {
        while (iNo > 0) {
            System.out.print("*\t");
            iNo--;
        }
    }
}
class program2_2
{
    public static void main(String A[])
    {
        int iValue = 0;
        System.out.println("Enter number : ");
        Scanner scanner = new Scanner(System.in);

        iValue = scanner.nextInt();
        Demo.Display(iValue);
        
    }
}