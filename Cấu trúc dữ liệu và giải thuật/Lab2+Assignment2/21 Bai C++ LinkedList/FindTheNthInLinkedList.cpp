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
int getNode(Node* head, int n) {
    int count = 1;
    Node* current = head;
    while (current != NULL && count < n) {
        current = current->next;
        count++;
    }
    if (current == NULL) {
        return -1;
    } else {
        return current->data;
    }
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
    int index;
    cout << "Enter the index of the node to get: ";
    cin >> index;
    int nodeData = getNode(head, index);
    if (nodeData != -1) {
        cout << "The data at node " << index << " is: " << nodeData << endl;
    } else {
        cout << "The specified index is out of range." << endl;
    }

    return 0;
}
