import java.util.Scanner;

// Node class
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

// Circular Linked List class
public class CircularLinkedList {
    private Node head = null;
    private Node tail = null;

    // Create list using user input
    public void createList() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of nodes: ");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            System.out.print("Enter data for node " + i + ": ");
            int data = sc.nextInt();
            insertAtEnd(data);
        }
        System.out.println("Circular linked list created successfully!");
        sc.close();
    }

    // Traverse list
    public void traverseList() {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }
        Node current = head;
        System.out.print("Circular Linked List: ");
        do {
            System.out.print(current.data + " ");
            current = current.next;
        } while (current != head);
        System.out.println();
    }

    // Insert at beginning
    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            tail = newNode;
            tail.next = head;
        } else {
            newNode.next = head;
            head = newNode;
            tail.next = head;
        }
    }

    // Insert at end
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            tail = newNode;
            tail.next = head;
        } else {
            tail.next = newNode;
            tail = newNode;
            tail.next = head;
        }
    }

    // Insert at specific position
    public void insertAtSpecific(int pos, int data) {
        if (pos <= 0) {
            System.out.println("Invalid position!");
            return;
        }

        Node newNode = new Node(data);

        if (pos == 1) {
            insertAtBeginning(data);
            return;
        }

        Node temp = head;
        int count = 1;
        while (count < pos - 1 && temp.next != head) {
            temp = temp.next;
            count++;
        }

        // Insert node
        newNode.next = temp.next;
        temp.next = newNode;

        // If inserted at end, update tail
        if (temp == tail) {
            tail = newNode;
        }
    }

    // Delete from beginning
    public void deleteAtBeginning() {
        if (head == null) {
            System.out.println("List is empty. Nothing to delete.");
            return;
        }

        if (head == tail) {
            head = tail = null;
        } else {
            head = head.next;
            tail.next = head;
        }
        System.out.println("Node deleted from beginning.");
    }

    // Delete from end
    public void deleteAtEnd() {
        if (head == null) {
            System.out.println("List is empty. Nothing to delete.");
            return;
        }

        if (head == tail) {
            head = tail = null;
        } else {
            Node temp = head;
            while (temp.next != tail) {
                temp = temp.next;
            }
            temp.next = head;
            tail = temp;
        }
        System.out.println("Node deleted from end.");
    }

    // Delete at specific position
    public void deleteAtSpecific(int pos) {
        if (head == null) {
            System.out.println("List is empty. Nothing to delete.");
            return;
        }

        if (pos <= 0) {
            System.out.println("Invalid position!");
            return;
        }

        if (pos == 1) {
            deleteAtBeginning();
            return;
        }

        Node temp = head;
        Node prev = null;
        int count = 1;

        while (count < pos && temp.next != head) {
            prev = temp;
            temp = temp.next;
            count++;
        }

        if (count != pos) {
            System.out.println("Position out of range!");
            return;
        }

        prev.next = temp.next;

        if (temp == tail) {
            tail = prev;
        }

        System.out.println("Node deleted from position " + pos + ".");
    }

    // Search for a node
    public void search(int key) {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }

        Node temp = head;
        int pos = 1;
        do {
            if (temp.data == key) {
                System.out.println("Element " + key + " found at position " + pos + ".");
                return;
            }
            temp = temp.next;
            pos++;
        } while (temp != head);

        System.out.println("Element " + key + " not found in the list.");
    }

    // Main menu
    public static void main(String[] args) {
        CircularLinkedList list = new CircularLinkedList();
        Scanner sc = new Scanner(System.in);
        int choice, data, pos;

        do {
            System.out.println("\n====== Circular Linked List Menu ======");
            System.out.println("1. Create List");
            System.out.println("2. Traverse List");
            System.out.println("3. Insert at Beginning");
            System.out.println("4. Insert at End");
            System.out.println("5. Insert at Specific Position");
            System.out.println("6. Delete at Beginning");
            System.out.println("7. Delete at End");
            System.out.println("8. Delete at Specific Position");
            System.out.println("9. Search an Element");
            System.out.println("10. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    list.createList();
                    break;
                case 2:
                    list.traverseList();
                    break;
                case 3:
                    System.out.print("Enter data: ");
                    data = sc.nextInt();
                    list.insertAtBeginning(data);
                    break;
                case 4:
                    System.out.print("Enter data: ");
                    data = sc.nextInt();
                    list.insertAtEnd(data);
                    break;
                case 5:
                    System.out.print("Enter position: ");
                    pos = sc.nextInt();
                    System.out.print("Enter data: ");
                    data = sc.nextInt();
                    list.insertAtSpecific(pos, data);
                    break;
                case 6:
                    list.deleteAtBeginning();
                    break;
                case 7:
                    list.deleteAtEnd();
                    break;
                case 8:
                    System.out.print("Enter position: ");
                    pos = sc.nextInt();
                    list.deleteAtSpecific(pos);
                    break;
                case 9:
                    System.out.print("Enter element to search: ");
                    data = sc.nextInt();
                    list.search(data);
                    break;
                case 10:
                    System.out.println("Exiting program...");
                    break;
                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        } while (choice != 10);
        sc.close();
    }
}