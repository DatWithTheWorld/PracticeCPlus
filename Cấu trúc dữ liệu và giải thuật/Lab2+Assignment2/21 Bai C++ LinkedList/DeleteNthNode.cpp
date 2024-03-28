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
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
void deleteNthNodeFromEnd(Node* &head, int n) {
    int numNodes = countNodes(head);
    if (n > numNodes || n <= 0) {
        cout << "Invalid input. The linked list has " << numNodes << " nodes." << endl;
    } else if (n == numNodes) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        int k = numNodes - n;
        Node* current = head;
        Node* previous = NULL;
        for (int i = 0; i < k; i++) {
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
        delete current;
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
    cout << "Enter the value of n: ";
    cin >> n;
    deleteNthNodeFromEnd(head, n);
    cout << "The updated linked list is: ";
    printList(head);

    return 0;
}
