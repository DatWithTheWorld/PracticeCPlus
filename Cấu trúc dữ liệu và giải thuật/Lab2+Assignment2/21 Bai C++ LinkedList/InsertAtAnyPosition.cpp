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

void insertNode(Node* &head, int data, int position) {
    Node* newNode = createNode(data);
    if (head == NULL || position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        int count = 1;
        while (current != NULL && count < position-1) {
            current = current->next;
            count++;
        }
        if (current == NULL) {
            cout << "Invalid position." << endl;
        } else {
            newNode->next = current->next;
            current->next = newNode;
        }
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
    int n, data, position;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the data for node " << i+1 << ": ";
        cin >> data;
        insertNode(head, data, i+1);
    }
    cout << "The initial linked list is: ";
    printList(head);
    cout << "Enter the data for the new node: ";
    cin >> data;
    cout << "Enter the position of the new node: ";
    cin >> position;
    insertNode(head, data, position);
    cout << "The updated linked list is: ";
    printList(head);

    return 0;
}
