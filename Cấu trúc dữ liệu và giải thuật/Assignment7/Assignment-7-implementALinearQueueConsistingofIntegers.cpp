#include <iostream>
using namespace std;

#define MAXSIZE 100

int queue[MAXSIZE];
int front = -1;
int rear = -1;

void enqueue(int data) {
    if (rear == MAXSIZE - 1) {
        cout << "Queue is full." << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        cout << data << " has been enqueued." << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << queue[front] << " has been dequeued." << endl;
        front++;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Elements in queue are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
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
