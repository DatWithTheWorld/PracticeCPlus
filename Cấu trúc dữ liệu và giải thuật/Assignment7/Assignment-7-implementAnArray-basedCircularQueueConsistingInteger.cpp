#include <iostream>
using namespace std;

#define MAXSIZE 100

int queue[MAXSIZE];
int front = -1;
int rear = -1;

bool isFull() {
    if (front == 0 && rear == MAXSIZE - 1) {
        return true;
    } else if (front == rear + 1) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (front == -1) {
        return true;
    } else {
        return false;
    }
}

void enqueue(int data) {
    if (isFull()) {
        cout << "Queue is full." << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAXSIZE;
        queue[rear] = data;
        cout << data << " has been enqueued." << endl;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << queue[front] << " has been dequeued." << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAXSIZE;
        }
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Elements in queue are: ";
        int i = front;
        while (i != rear) {
            cout << queue[i] << " ";
            i = (i + 1) % MAXSIZE;
        }
        cout << queue[rear] << endl;
    }
}

int main() {
    int choice, data;

    while (true) {
        cout << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data to enqueue: ";
                cin >> data;
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
