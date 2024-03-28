#include <iostream>
using namespace std;

// Define a node structure for the binary search tree
struct Node {
    int key; // key value of the node
    Node* left; // left child node
    Node* right; // right child node
};

// Create a new node for the binary search tree
Node* createNode(int key) {
    Node* node = new Node;
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Add a new node to the binary search tree
Node* addNode(Node* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }
    if (key < root->key) {
        root->left = addNode(root->left, key);
    } else if (key > root->key) {
        root->right = addNode(root->right, key);
    }
    return root;
}

// Find the node with the minimum key value in the binary search tree
Node* findMinNode(Node* root) {
    if (root == NULL) {
        return root;
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Remove a node from the binary search tree
Node* removeNode(Node* root, int key) {
    if (root == NULL) {
        return root;
    }
    if (key < root->key) {
        root->left = removeNode(root->left, key);
    } else if (key > root->key) {
        root->right = removeNode(root->right, key);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMinNode(root->right);
        root->key = temp->key;
        root->right = removeNode(root->right, temp->key);
    }
    return root;
}

// Search for a value x in the binary search tree
Node* searchNode(Node* root, int x) {
    if (root == NULL || root->key == x) {
        return root;
    }
    if (x < root->key) {
        return searchNode(root->left, x);
    }
    return searchNode(root->right, x);
}

// In-order traversal of the binary search tree
void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->key << " ";
    inorderTraversal(root->right);
}

// Main function to test the binary search tree
int main() {
    Node* root = createNode(41);
    root->left = createNode(20);
    root->left->left = createNode(11);
    root->left->right = createNode(29);
    root->left->right->left = createNode(26);
    root->left->right->right = createNode(32);
    root->right = createNode(65);
    root->right->left = createNode(50);
    root->right->right = createNode(91);
    root->right->right->left = createNode(72);
    root->right->right->right = createNode(99);

    // Add a node with key=9 to the binary search tree
    root = addNode(root, 9);
    cout << "Binary Search Tree after adding node with key=9: ";
    inorderTraversal(root);
    cout << endl;

    // Remove node 12 from the binary search tree
    root = removeNode(root, 12);
    cout << "Binary Search Tree after removing node with key=12: ";
    inorderTraversal(root);
    cout << endl;

    // Remove node 53 from the binary search tree
    root = removeNode(root, 53);
    cout << "Binary Search Tree after removing node with key=53: ";
    inorderTraversal(root);
    cout << endl;

    // Search for value 50 in the binary search tree
    Node* node = searchNode(root, 50);
    cout << "Node with value 50 is " << ((node == NULL) ? "not found." : "found.") << endl;

    return 0;
}
