//WAP to implement stack by using array
import java.util.*;

class A {
    public int top = -1, n = 5, i;
    public int stack[] = new int[n];

    public void push(int x) {
        if (top == n - 1) {
            System.out.println("Stack Overflow");
            return;
        }
        stack[++top] = x;
        System.out.println("Insertion Successful!!!");
        peep();
    }

    public void pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
            return;
        }
        System.out.println("Deleted Element = " + stack[top--]);
        peep();
    }

    public void peep() {
        for (i = 0; i <= top; i++)
            System.out.print(" " + stack[i]);
        System.out.println("");
    }
}

class Stack {
    public static void main(String[] args) {
        A ob = new A();
        int ch, a;
        Scanner ob1 = new Scanner(System.in);
        while (true) {
            System.out.println("Press 1 for Push\nPress 2 for Pop\nEnter the Choice = ");
            ch = ob1.nextInt();
            switch (ch) {
                case 1:
                    System.out.println("Enter the No. = ");
                    a = ob1.nextInt();
                    ob.push(a);
                    break;
                case 2:
                    ob.pop();
                    break;
                default:
                    System.exit(0);
            }
        }
    }

}