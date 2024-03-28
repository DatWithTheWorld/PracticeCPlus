#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* add(Node* head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* deleteMid(Node* head) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return NULL;
    }
    else if (head->next == NULL) {
        delete head;
        head = NULL;
        return NULL;
    }
    Node* slowPtr = head;
    Node* fastPtr = head;
    Node* prevPtr = NULL;
    while (fastPtr != NULL && fastPtr->next != NULL) {
        fastPtr = fastPtr->next->next;
        prevPtr = slowPtr;
        slowPtr = slowPtr->next;
    }
    prevPtr->next = slowPtr->next;
    delete slowPtr;
    return head;
}
int main() {
    Node* head = NULL;
    head = add(head, 1);
    head = add(head, 2);
    head = add(head, 3);
    head = add(head, 4);
    head = add(head, 5);

    cout << "Original List: ";
    printList(head);

    head = deleteMid(head);

    cout << "After deleting middle node: ";
    printList(head);

    return 0;
}

