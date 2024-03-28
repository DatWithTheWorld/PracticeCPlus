#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};


void push(Node** head_ref, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void reverseList(Node* &head) {
    Node *current = head, *prev = NULL, *next = NULL;
    while (current != NULL) {
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    }
    head = prev; 
}
void displayReverse(Node* head) {
    if (head == NULL) {
        return;
    }
    displayReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* head = NULL;
    int n, data;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the data for node " << i + 1 << ": ";
        cin >> data;
        push(&head, data);
    }
    cout << "The linked list in reverse order is: ";
    reverseList(head);
    displayReverse(head);
    return 0;
}
