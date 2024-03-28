#include <iostream>

using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

Node* front = NULL;

void enqueue(int data, int priority) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->priority = priority;
    if (front == NULL || priority < front->priority) {
        newNode->next = front;
        front = newNode;
    } else {
        Node* current = front;
        while (current->next != NULL && current->next->priority <= priority) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "H�ng d?i tr?ng" << endl;
        return;
    }
    Node* temp = front;
    front = front->next;
    cout << "Ph?n t? du?c x�a kh?i h�ng d?i: " << temp->data << endl;
    delete temp;
}

void display() {
    if (front == NULL) {
        cout << "H�ng d?i tr?ng" << endl;
        return;
    }
    Node* current = front;
    while (current != NULL) {
        cout << "D? li?u: " << current->data << ", Uu ti�n: " << current->priority << endl;
        current = current->next;
    }
}

int main() {
    enqueue(5, 2);
    enqueue(3, 1);
    enqueue(2, 3);
    enqueue(8, 0);
    display();
    dequeue();
    display();
    return 0;
}
