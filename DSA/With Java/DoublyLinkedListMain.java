// Doubly Linked List Implementation in Java
import java.util.Scanner;

class Node {
    int data;
    Node prev;
    Node next;

    Node(int data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

class DoublyLinkedList {
    Node head = null;

    // Create list
    public void createList(int n) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < n; i++) {
            System.out.print("Enter data for node " + (i + 1) + ": ");
            int data = sc.nextInt();
            insertAtEnd(data);
        }
        sc.close();
        traverse();
    }

    // Traverse list
    public void traverse() {
        if (head == null) {
            System.out.println("List is empty!");
            return;
        }
        Node temp = head;
        Node back = head;
        System.out.print("Doubly Linked List: ");
        while (temp != null) {
            System.out.print(temp.data + " ");
            back = temp;
            temp = temp.next;
        }
        System.out.println("Moonwalk...");
        while (back != null) {
            System.out.print(back.data + " ");
            back = back.prev;
        }
        System.out.println();
    }

    // Insert at beginning
    public void insertAtBeg(int data) {
        Node newNode = new Node(data);
        if (head != null) {
            newNode.next = head;
            head.prev = newNode;
        }
        head = newNode;
        traverse();
    }

    // Insert at end
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node temp = head;
        while (temp.next != null)
            temp = temp.next;
        temp.next = newNode;
        newNode.prev = temp;
        traverse();
    }

    // Insert at specific position (1-based)
    public void insertAtAny(int pos, int data) {
        if (pos <= 1 || head == null) {
            insertAtBeg(data);
            return;
        }

        Node newNode = new Node(data);
        Node temp = head;

        for (int i = 1; i < pos - 1 && temp.next != null; i++)
            temp = temp.next;

        newNode.next = temp.next;
        newNode.prev = temp;

        if (temp.next != null)
            temp.next.prev = newNode;

        temp.next = newNode;
        traverse();
    }

    // Delete from beginning
    public void deleteBeg() {
        if (head == null) {
            System.out.println("List is empty!");
            return;
        }
        if (head.next == null) {
            head = null;
        } else {
            head = head.next;
            head.prev = null;
        }
        traverse();
    }

    // Delete from end
    public void deleteEnd() {
        if (head == null) {
            System.out.println("List is empty!");
            return;
        }
        if (head.next == null) {
            head = null;
            return;
        }
        Node temp = head;
        while (temp.next != null)
            temp = temp.next;
        temp.prev.next = null;
        traverse();
    }

    // Delete from specific position
    public void deleteAny(int pos) {
        if (head == null) {
            System.out.println("List is empty!");
            return;
        }
        if (pos == 1) {
            deleteBeg();
            return;
        }

        Node temp = head;
        for (int i = 1; i < pos && temp != null; i++)
            temp = temp.next;

        if (temp == null) {
            System.out.println("Position out of range!");
            return;
        }

        if (temp.next != null)
            temp.next.prev = temp.prev;
        if (temp.prev != null)
            temp.prev.next = temp.next;
        traverse();
    }

    // Search element
    public void search(int key) {
        Node temp = head;
        int pos = 1;
        while (temp != null) {
            if (temp.data == key) {
                System.out.println(key + " found at position " + pos);
                return;
            }
            temp = temp.next;
            pos++;
        }
        System.out.println(key + " not found in the list.");
        traverse();
    }
}

public class DoublyLinkedListMain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        DoublyLinkedList list = new DoublyLinkedList();

        while (true) {
            System.out.println("\n=== Doubly Linked List Operations ===");
            System.out.println("1. Create List");
            System.out.println("2. Traverse");
            System.out.println("3. Insert at Beginning");
            System.out.println("4. Insert at End");
            System.out.println("5. Insert at Any Position");
            System.out.println("6. Delete from Beginning");
            System.out.println("7. Delete from End");
            System.out.println("8. Delete from Any Position");
            System.out.println("9. Search Element");
            System.out.println("10. Exit");
            System.out.print("Enter your choice: ");
            int ch = sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.print("Enter number of nodes: ");
                    int n = sc.nextInt();
                    list.createList(n);
                    break;
                case 2:
                    list.traverse();
                    break;
                case 3:
                    System.out.print("Enter data: ");
                    list.insertAtBeg(sc.nextInt());
                    break;
                case 4:
                    System.out.print("Enter data: ");
                    list.insertAtEnd(sc.nextInt());
                    break;
                case 5:
                    System.out.print("Enter position: ");
                    int pos = sc.nextInt();
                    System.out.print("Enter data: ");
                    int data = sc.nextInt();
                    list.insertAtAny(pos, data);
                    break;
                case 6:
                    list.deleteBeg();
                    break;
                case 7:
                    list.deleteEnd();
                    break;
                case 8:
                    System.out.print("Enter position: ");
                    list.deleteAny(sc.nextInt());
                    break;
                case 9:
                    System.out.print("Enter element to search: ");
                    int key = sc.nextInt();
                    list.search(key);
                    break;
                case 10:
                    System.out.println("Exiting program. Goodbye!");
                    sc.close();
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        }
    }
}