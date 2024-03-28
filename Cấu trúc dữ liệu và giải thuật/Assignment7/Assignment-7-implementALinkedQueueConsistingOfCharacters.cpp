#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(char data) {
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if (rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
    cout << data << " has been enqueued." << endl;
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty." << endl;
    } else {
        Node* temp = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        cout << temp->data << " has been dequeued." << endl;
        delete temp;
    }
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty." << endl;
    } else {
        Node* temp = front;
        cout << "Elements in queue are: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    int choice;
    char data;

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
