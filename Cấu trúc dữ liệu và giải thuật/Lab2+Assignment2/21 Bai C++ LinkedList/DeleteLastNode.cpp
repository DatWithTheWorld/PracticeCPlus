#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertNode(Node* &head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}
void deleteLastNode(Node* &head) {
    if (head == NULL) {
        cout << "The linked list is already empty." << endl;
    } else if (head->next == NULL) {
        delete head;
        head = NULL;
    } else {
        Node* current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        delete current->next;
        current->next = NULL;
    }
}
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
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
        insertNode(head, data);
    }
    cout << "The initial linked list is: ";
    printList(head);
    deleteLastNode(head);
    cout << "The updated linked list is: ";
    printList(head);

    return 0;
}
