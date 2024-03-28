#include <iostream>

struct Node {
    int value;
    Node* prev;
    Node* next;
};

Node* create_node(int value) {
    Node* new_node = new Node;
    new_node->value = value;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

void add_first(Node** head, int value) {
    Node* new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
    } else {
        new_node->next = *head;
        (*head)->prev = new_node;
        *head = new_node;
    }
}

void add_last(Node** head, int value) {
    Node* new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
    } else {
        Node* node = *head;
        while (node->next != NULL) {
            node = node->next;
        }
        node->next = new_node;
        new_node->prev = node;
    }
}

void delete_first(Node** head) {
    if (*head == NULL) {
        return;
    }
    Node* node = *head;
    *head = node->next;
    if (*head != NULL) {
        (*head)->prev = NULL;
    }
    delete node;
}

void delete_last(Node** head) {
    if (*head == NULL) {
        return;
    }
    Node* node = *head;
    while (node->next != NULL) {
        node = node->next;
    }
    if (node->prev != NULL) {
        node->prev->next = NULL;
    } else {
        *head = NULL;
    }
    delete node;
}

void print_list(Node* head) {
    Node* node = head;
    while (node != NULL) {
        std::cout << node->value << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int count_nodes(Node* head) {
    int count = 0;
    Node* node = head;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

bool search_value(Node* head, int value) {
    Node* node = head;
    while (node != NULL) {
        if (node->value == value) {
            return true;
        }
        node = node->next;
    }
    return false;
}

int search_position(Node* head, int n) {
    if (n < 0) {
        return -1;
    }
    int count = 0;
    Node* node = head;
    while (node != NULL && count < n) {
        node = node->next;
        count++;
    }
    if (node != NULL) {
        return node->value;
    } else {
        return -1;
    }
}

void delete_at_position(Node** head, int n) {
    if (n < 0) {
        return;
    }
    int count = 0;
    Node* node = *head;
    while (node != NULL && count < n) {
        node = node->next;
        count++;
    }
    if (node == NULL) {
        return;
    }
    if (node->prev != NULL) {
        node->prev->next = node->next;
    } else {
        *head = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    delete node;
}

void insert_at_position(Node** head, int n, int value) {
    if (n < 0) {
        return;
    }
    Node* new_node = create_node(value);
    if (n == 0) {
        if (*head == NULL) {
            *head = new_node;
        } else {
            new_node->next = *head;
            (*head)->prev = new_node;
            *head = new_node;
        }
    } else {
        int count = 0;
        Node* node = *head;
        while (node != NULL && count < n-1) {
            node = node->next;
            count++;
        }
        if (node == NULL) {
            return;
        }
        new_node->prev = node;
        new_node->next = node->next;
        if (node->next != NULL) {
            node->next->prev = new_node;
        }
        node->next = new_node;
    }
}

int main() {
    Node* p = NULL;
    add_first(&p, 1);
    add_first(&p, 2);
    add_first(&p, 3);
    print_list(p); // Output: 3 2 1
    add_last(&p, 4);
    add_last(&p, 5);
    add_last(&p, 6);
    print_list(p); // Output: 3 2 1 4 5 6
    delete_first(&p);
    delete_first(&p);
    delete_first(&p);
    print_list(p); // Output: 4 5 6
    delete_last(&p);
    delete_last(&p);
    print_list(p); // Output: 4
    std::cout << count_nodes(p) << std::endl; // Output: 1
    std::cout << search_value(p, 4) << std::endl; // Output: 1
    std::cout << search_value(p, 5) << std::endl; // Output: 0
    std::cout << search_position(p, 0) << std::endl; // Output: 4
    std::cout << search_position(p, 1) << std::endl; // Output: -1
    insert_at_position(&p, 0, 7);
    insert_at_position(&p, 2, 8);
    insert_at_position(&p, 4, 9);
    print_list(p); // Output: 7 4 8 5 9
    delete_at_position(&p, 0);
    delete_at_position(&p, 2);
    delete_at_position(&p, 3);
    print_list(p); // Output: 4 8
    return 0;
}
