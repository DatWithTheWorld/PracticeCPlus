#include <iostream>

struct Node {
    int value;
    Node* next;
};

Node* create_node(int value) {
    Node* new_node = new Node;
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

void add_first(Node** head, int value) {
    Node* new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
        new_node->next = *head;
    } else {
        Node* node = *head;
        while (node->next != *head) {
            node = node->next;
        }
        node->next = new_node;
        new_node->next = *head;
        *head = new_node;
    }
}

void add_last(Node** head, int value) {
    Node* new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
        new_node->next = *head;
    } else {
        Node* node = *head;
        while (node->next != *head) {
            node = node->next;
        }
        node->next = new_node;
        new_node->next = *head;
    }
}

void delete_first(Node** head) {
    if (*head == NULL) {
        return;
    }
    if ((*head)->next == *head) {
        delete *head;
        *head = NULL;
    } else {
        Node* node = *head;
        while (node->next != *head) {
            node = node->next;
        }
        Node* temp = *head;
        *head = temp->next;
        node->next = *head;
        delete temp;
    }
}

void delete_last(Node** head) {
    if (*head == NULL) {
        return;
    }
    if ((*head)->next == *head) {
        delete *head;
        *head = NULL;
    } else {
        Node* node = *head;
        while (node->next->next != *head) {
            node = node->next;
        }
        Node* temp = node->next;
        node->next = *head;
        delete temp;
    }
}

void print_list(Node* head) {
    if (head == NULL) {
        return;
    }
    Node* node = head;
    do {
        std::cout << node->value << " ";
        node = node->next;
    } while (node != head);
    std::cout << std::endl;
}

int main() {
    Node* head = NULL;
    add_first(&head, 1);
    add_first(&head, 2);
    add_first(&head, 3);
    print_list(head); // Output: 3 2 1
    add_last(&head, 4);
    add_last(&head, 5);
    add_last(&head, 6);
    print_list(head); // Output: 3 2 1 4 5 6
    delete_first(&head);
    delete_first(&head);
    delete_first(&head);
    print_list(head); // Output: 4 5 6
    delete_last(&head);
    delete_last(&head);
    print_list(head); // Output: 4
    add_first(&head, 3);
    add_last(&head, 5);
    print_list(head); // Output: 3 4 5
    delete_first(&head);
    delete_last(&head);
    print_list(head); // Output: 4
    return 0;
}
