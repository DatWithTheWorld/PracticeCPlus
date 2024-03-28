#include <iostream>
#include <string>

using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* top = NULL;

void push(char data) {
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

char peek() {
    if (top == NULL) {
        cout << "Ngan x?p tr?ng" << endl;
        return ' ';
    }
    return top->data;
}

bool isEmpty() {
    return top == NULL;
}

void reverseStringUsingStack(string str) {
    for (int i = 0; i < str.length(); i++) {
        push(str[i]);
    }
    while (!isEmpty()) {
        cout << peek();
        pop();
    }
    cout << endl;
}

int main() {
    string str = "hello";

    cout << "Chu?i ban d?u: " << str << endl;
    cout << "Chu?i d?o ngu?c s? d?ng ngan x?p: ";
    reverseStringUsingStack(str);

    return 0;
}
