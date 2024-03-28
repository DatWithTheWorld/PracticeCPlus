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
void insertNodeAtMiddle(Node* &head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        newNode->prev = slow;
        newNode->next = slow->next;
        if (slow->next != NULL) {
            slow->next->prev = newNode;
        }
        slow->next = newNode;
    }
}
void printListFromBeginning(Node* head) {
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
        insertNodeAtMiddle(head, data);
    }
    cout << "The doubly linked list from the beginning is: ";
    printListFromBeginning(head);

    return 0;
}
