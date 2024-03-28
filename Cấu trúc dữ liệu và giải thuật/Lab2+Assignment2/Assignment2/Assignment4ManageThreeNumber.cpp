#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* addBeginning(Node* head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

Node* addEnd(Node* head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

Node* deleteFirst(Node* head) {
    if (head == NULL) {
        return NULL;
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
}

Node* deleteLast(Node* head) {
    if (head == NULL) {
        return NULL;
    } else if (head->next == NULL) {
        delete head;
        return NULL;
    } else {
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        return head;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

bool searchValue(Node* head, int val) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == val) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int searchPosition(Node* head, int pos) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        if (count == pos) {
            return temp->data;
        }
        temp = temp->next;
    }
    return -1;
}

Node* appendList(Node* p1, Node* p2) {
    if (p1 == NULL) {
        return p2;
    } else if (p2 == NULL) {
        return p1;
    } else {
        Node* temp = p1;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = p2;
        return p1;
    }
}

Node* mergeLists(Node* p1, Node* p2) {
    Node* mergedList = NULL;
    Node* tail = NULL;
    while (p1 != NULL && p2 != NULL) {
        if (p1->data < p2->data) {
            if (mergedList == NULL) {
                mergedList = p1;
                tail = p1;
            } else {
                tail->next = p1;
                tail = tail->next;
            }
            p1 = p1->next;
        } else {
            if (mergedList == NULL) {
                mergedList = p2;
                tail = p2;
            } else {
                tail->next = p2;
                tail = tail->next;
            }
            p2 = p2->next;
        }
    }
    if (p1 != NULL) {
        if (mergedList == NULL) {
            mergedList = p1;
        } else {
            tail->next = p1;
        }
    } else if (p2 != NULL) {
        if (mergedList == NULL) {
            mergedList = p2;
        } else {
            tail->next = p2;
        }
    }
    return mergedList;
}

Node* deleteNode(Node* head, int pos) {
    if (head == NULL) {
        return NULL;
    } else if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    } else {
        int count = 1;
        Node* temp = head;
        while (count < pos - 1 && temp != NULL) {
            count++;
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
            return head;
              if (temp == NULL || temp->next == NULL) {
            return head;
        } else {
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
            return head;
        }
    }
}
}

int main() {
    Node* head = NULL;
    head = addBeginning(head, 3);
    head = addBeginning(head, 2);
    head = addBeginning(head, 1);
    head = addEnd(head, 4);
    head = addEnd(head, 5);
    printList(head);
    head = deleteFirst(head);
    printList(head);
    head = deleteLast(head);
    printList(head);
    cout << "Number of Nodes: " << countNodes(head) << endl;
    cout << "Search Value 4: " << searchValue(head, 4) << endl;
    cout << "Search Value 6: " << searchValue(head, 6) << endl;
    cout << "Search Position 3: " << searchPosition(head, 3) << endl;
    cout << "Search Position 6: " << searchPosition(head, 6) << endl;
    Node* newHead = NULL;
    newHead = addEnd(newHead, 7);
    newHead = addEnd(newHead, 8);
    newHead = addEnd(newHead, 9);
    appendList(head, newHead);
    printList(head);
    Node* mergedList = NULL;
    mergedList = addEnd(mergedList, 2);
    mergedList = addEnd(mergedList, 4);
    mergedList = addEnd(mergedList, 6);
    Node* mergedList2 = NULL;
    mergedList2 = addEnd(mergedList2, 1);
    mergedList2 = addEnd(mergedList2, 3);
    mergedList2 = addEnd(mergedList2, 5);
    Node* mergedList3 = mergeLists(mergedList, mergedList2);
    printList(mergedList3);
    head = deleteNode(head, 3);
    printList(head);
    return 0;

}

