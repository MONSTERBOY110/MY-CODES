// Circular Queue implementation in Java
class CircularQueue {
    private int size;
    private int[] queue;
    private int front, rear;

    // Constructor
    public CircularQueue(int size) {
        this.size = size;
        this.queue = new int[size];
        this.front = -1;
        this.rear = -1;
    }

    // Check if queue is full
    public boolean isFull() {
        return (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1));
    }

    // Check if queue is empty
    public boolean isEmpty() {
        return front == -1;
    }

    // Enqueue operation
    public void enqueue(int data) {
        if (isFull()) {
            System.out.println("Queue is Full");
            return;
        }

        if (front == -1) { // First element
            front = 0;
            rear = 0;
            queue[rear] = data;
        } else if (rear == size - 1 && front != 0) {
            rear = 0; // Circular increment
            queue[rear] = data;
        } else {
            rear++;
            queue[rear] = data;
        }
    }

    // Dequeue operation
    public int dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is Empty");
            return -1;
        }

        int data = queue[front];

        // Single element condition
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == size - 1) {
            front = 0; // Circular increment
        } else {
            front++;
        }

        return data;
    }

    // Display queue elements
    public void display() {
        if (isEmpty()) {
            System.out.println("Queue is Empty");
            return;
        }

        System.out.print("Queue elements: ");
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                System.out.print(queue[i] + " ");
            }
        } else {
            for (int i = front; i < size; i++) {
                System.out.print(queue[i] + " ");
            }
            for (int i = 0; i <= rear; i++) {
                System.out.print(queue[i] + " ");
            }
        }
        System.out.println();
    }

    // Main method
    public static void main(String[] args) {
        CircularQueue cq = new CircularQueue(5);

        cq.enqueue(10);
        cq.enqueue(20);
        cq.enqueue(30);
        cq.enqueue(40);
        cq.enqueue(50);

        cq.display();

        System.out.println("deleted element = "+cq.dequeue());
        System.out.println("deleted element = "+cq.dequeue());
        
        System.out.println("After two dequeue operations:");
        cq.display();

        cq.enqueue(60);
        cq.enqueue(70);

        System.out.println("After enqueueing 60 and 70:");
        cq.display();
    }
}