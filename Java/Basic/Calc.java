package Basic;

import java.util.Scanner;

public class Calc {
    public static void main(String[] args) {
        Scanner ob =new Scanner(System.in);
        System.out.println("Enter 1st Number:");
        int a=ob.nextInt();
        System.out.println("Enter 2nd Number:");
        int b=ob.nextInt();
        System.out.println("Addition: "+(a+b));
        System.out.println("Subtraction: "+(a-b));
        System.out.println("Multiplication: "+(a*b));
        System.out.println("Division: "+(a/b));
    }
}
