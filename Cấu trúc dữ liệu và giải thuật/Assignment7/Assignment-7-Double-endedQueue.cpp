#include <iostream>
using namespace std;

#define MAXSIZE 100

int deque[MAXSIZE];
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

void insertFront(int data) {
    if (isFull()) {
        cout << "Deque is full." << endl;
    } else {
        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = MAXSIZE - 1;
        } else {
            front--;
        }
        deque[front] = data;
        cout << data << " has been inserted at the front." << endl;
    }
}

void insertRear(int data) {
    if (isFull()) {
        cout << "Deque is full." << endl;
    } else {
        if (front == -1) {
            front = rear = 0;
        } else if (rear == MAXSIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }
        deque[rear] = data;
        cout << data << " has been inserted at the rear." << endl;
    }
}

void deleteFront() {
    if (isEmpty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << deque[front] << " has been deleted from the front." << endl;
        if (front == rear) {
            front = rear = -1;
        } else if (front == MAXSIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }
}

void deleteRear() {
    if (isEmpty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << deque[rear] << " has been deleted from the rear." << endl;
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = MAXSIZE - 1;
        } else {
            rear--;
        }
    }
}

void display() {
    if (isEmpty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Elements in deque are: ";
        int i = front;
        while (i != rear) {
            cout << deque[i] << " ";
            i = (i + 1) % MAXSIZE;
        }
        cout << deque[rear] << endl;
    }
}

int main() {
    int choice, data;

    while (true) {
        cout << endl;
        cout << "1. Insert at front" << endl;
        cout << "2. Insert at rear" << endl;
        cout << "3. Delete from front" << endl;
        cout << "4. Delete from rear" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data to insert at front: ";
                cin >> data;
                insertFront(data);
                break;
            case 2:
                cout << "Enter the data to insert at rear: ";
                cin >> data;
                insertRear(data);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
