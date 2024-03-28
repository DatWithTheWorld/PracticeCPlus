#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
};
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertNodeAtEnd(Node* &head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}
void printListReverse(Node* head) {
    Node* current = head;
    while (current != NULL && current->next != NULL) {
        current = current->next;
    }
    while (current != NULL) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int n, data;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the data for node " << i+1 << ": ";
        cin >> data;
        insertNodeAtEnd(head, data);
    }
    cout << "The doubly linked list in reverse order is: ";
    printListReverse(head);

    return 0;
}
