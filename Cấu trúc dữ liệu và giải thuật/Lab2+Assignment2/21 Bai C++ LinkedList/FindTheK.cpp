#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
void insertNode(Node* &head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}
Node* findMiddleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* findKthNodeFromMiddle(Node* head, int k) {
    Node* middle = findMiddleNode(head);
    if (middle == nullptr) {
        return nullptr;
    }
    Node* current = middle;
    for (int i = 1; i < k && current != nullptr; i++) {
        current = current->next;
    }
    return current;
}
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, data, k;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the data for node " << i+1 << ": ";
        cin >> data;
        insertNode(head, data);
    }
    cout << "The initial linked list is: ";
    printList(head);
    cout << "Enter the value of k: ";
    cin >> k;
    Node* kthNode = findKthNodeFromMiddle(head, k);
    if (kthNode == nullptr) {
        cout << "The linked list is empty or the value of k is invalid." << endl;
    } else {
        cout << "The k(th) node of the linked list is: " << kthNode->data << endl;
    }

    return 0;
}
