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
    newNode->prev =NULL;
    newNode->next =NULL;
    return newNode;
}
void insertNodeAtEnd(Node* &head, int data) {
    Node* newNode = createNode(data);
    if (head ==NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next !=NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current !=NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    Node* head =NULL;
    int n, data;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the data for node " << i+1 << ": ";
        cin >> data;
        insertNodeAtEnd(head, data);
    }
    int nodeCount = countNodes(head);
    cout << "The number of nodes in the doubly linked list is: " << nodeCount << endl;

    return 0;
}
