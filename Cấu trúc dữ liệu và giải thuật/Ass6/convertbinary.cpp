#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL) {
        cout << "Ngan x?p tr?ng" << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

int peek() {
    if (top == NULL) {
        cout << "Ngan x?p tr?ng" << endl;
        return -1;
    }
    return top->data;
}

bool isEmpty() {
    return top == NULL;
}

void convertToBinary(int n) {
    while (n > 0) {
        int remainder = n % 2;
        push(remainder);
        n /= 2;
    }
    while (!isEmpty()) {
        cout << peek();
        pop();
    }
}

int main() {
    int n = 11;

    cout << "S? " << n << " chuy?n d?i sang s? nh? phân là: ";
    convertToBinary(n);
    cout << endl;

    return 0;
}
