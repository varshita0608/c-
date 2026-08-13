#include <iostream>
using namespace std;
#define MAX 5
struct MyQueue {
    int queue[MAX];
    int front = -1;
    int rear = -1;

    bool isFull() {
        return (front == 0 && rear == MAX - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }
    void insertFront(int item) {
        if (isFull()) {
            cout << "Overflow: Deque is full!\n";
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = MAX - 1; 
        } else {
            front = front - 1;
        }

        queue[front] = item;
        cout << "Inserted at front: " << item << endl;
    }

   
    void insertRear(int item) {
        if (isFull()) {
            cout << "Overflow: Deque is full!\n";
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else if (rear == MAX - 1) {
            rear = 0; 
        } else {
            rear = rear + 1;
        }

        queue[rear] = item;
        cout << "Inserted at rear: " << item << endl;
    }

    // Delete from Front
    void deleteFront() {
        if (isEmpty()) {
            cout << "Underflow: Deque is empty!\n";
            return;
        }

        cout << "Deleted from front: " << queue[front] << endl;

        if (front == rear) { 
            front = -1;
            rear = -1;
        } else if (front == MAX - 1) {
            front = 0; // Wrap around
        } else {
            front = front + 1;
        }
    }

    
    void deleteRear() {
        if (isEmpty()) {
            cout << "Underflow: Deque is empty!\n";
            return;
        }

        cout << "Deleted from rear: " << queue[rear] << endl;

        if (front == rear) { 
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = MAX - 1; 
        } else {
            rear = rear - 1;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty!\n";
            return;
        }

        cout << "Deque elements: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX; 
        }
        cout << endl;
    }
};

int main() {
    MyQueue dq;
    int choice, val;

    while (true) {
        cout << "1. Insert Front\n";
        cout << "2. Insert Rear\n";
        cout << "3. Delete Front\n";
        cout << "4. Delete Rear\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                dq.insertFront(val);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> val;
                dq.insertRear(val);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                dq.display();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}