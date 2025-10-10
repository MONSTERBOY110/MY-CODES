import java.util.*;
class B{
    public int i,n=5,front=-1,rear=-1;
    int queue[]=new int[n];
    public void enqueue(int x)
    {
       if(rear==n-1)
         {
            System.out.println("Queue is Overflow!!!");
            return;
         }
         if(front==-1)
           ++front;
        queue[++rear]=x;
        System.out.println("Insertion Successful!!!");
        display();
    }
    public void dequeue()
    {
         if(front==-1 || front>rear)
           {
              System.out.println("Queue is Underflow!!!");
            return;
           }
           System.out.println("Deleted = "+queue[front++]);
           display();
    }
    public void display()
    {
        for (i = front; i <= rear; i++)
            System.out.print(" " + queue[i]);
        System.out.println("");
    }
}
public class Queue {
    public static void main(String[] args) {
        B ob = new B();
        int ch, a;
        Scanner ob1 = new Scanner(System.in);
        while (true) {
            System.out.println("Press 1 for Enqueue\nPress 2 for Dequeue\nEnter the Choice = ");
            ch = ob1.nextInt();
            switch (ch) {
                case 1:
                    System.out.println("Enter the No. = ");
                    a = ob1.nextInt();
                    ob.enqueue(a);
                    break;
                case 2:
                    ob.dequeue();
                    break;
                default:
                    System.exit(0);
            }
        }
    }
}