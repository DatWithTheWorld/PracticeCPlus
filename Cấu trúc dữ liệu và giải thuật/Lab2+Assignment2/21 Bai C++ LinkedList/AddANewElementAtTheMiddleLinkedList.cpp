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
        newNode->next = slow->next;
        slow->next = newNode;
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
    printList(head);
    cin>>  data;
    insertNodeAtMiddle(head,data);
    cout << "The updated linked list is: ";
    printList(head);

    return 0;
}
