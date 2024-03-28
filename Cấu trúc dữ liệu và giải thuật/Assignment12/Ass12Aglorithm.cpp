#include <iostream>
using namespace std;

// Define a node structure for the AVL tree
struct Node {
    int key; // key value of the node
    int height; // height of the node
    Node* left; // left child node
    Node* right; // right child node
};

// Create a new node for the AVL tree
Node* createNode(int key) {
    Node* node = new Node;
    node->key = key;
    node->height = 1;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Get the height of a node in the AVL tree
int getHeight(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    return node->height;
}

// Get the balance factor of a node in the AVL tree
int getBalanceFactor(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    return getHeight(node->left) - getHeight(node->right);
}

// Rotate the binary search tree to the left
Node* rotateLeft(Node* node) {
    Node* rightChild = node->right;
    Node* leftSubtree = rightChild->left;

    rightChild->left = node;
    node->right = leftSubtree;

    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
    rightChild->height = max(getHeight(rightChild->left), getHeight(rightChild->right)) + 1;

    return rightChild;
}

// Rotate the binary search tree to the right
Node* rotateRight(Node* node) {
    Node* leftChild = node->left;
    Node* rightSubtree = leftChild->right;

    leftChild->right = node;
    node->left = rightSubtree;

    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
    leftChild->height = max(getHeight(leftChild->left), getHeight(leftChild->right)) + 1;

    return leftChild;
}

// Insert a new node into the AVL tree
Node* insertNode(Node* node, int key) {
    // Perform the standard BST insertion
    if (node == nullptr) {
        return createNode(key);
    }
    if (key < node->key) {
        node->left = insertNode(node->left, key);
    } else if (key > node->key) {
        node->right = insertNode(node->right, key);
    } else {
        return node;
    }

    // Update the height of the current node
    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;

    // Get the balance factor of the current node
    int balanceFactor = getBalanceFactor(node);

    // Perform rotation if the node is unbalanced
    if (balanceFactor > 1 && key < node->left->key) {
        return rotateRight(node);
    }
    if (balanceFactor < -1 && key > node->right->key) {
        return rotateLeft(node);
    }
    if (balanceFactor > 1 && key > node->left->key) {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }
    if (balanceFactor < -1 && key < node->right->key) {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;
}

// Find the node with the minimum key value in the AVL tree
Node* findMinNode(Node* node) {
    if (node == nullptr) {
        return node;
    }
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}

// Delete a node from the AVL tree
Node* deleteNode(Node* root, int key) {
    // Perform the standard BST deletion
    if (root == nullptr) {
        return root;
    }
    if (key < root->key) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->key) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMinNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }

    // Update the height of the current node
    root->height = max(getHeight(root->left), getHeight(root->right)) + 1;

    // Get the balance factor of the current node
    int balanceFactor = getBalanceFactor(root);

    // Perform rotation if the node is unbalanced
    if (balanceFactor > 1 && getBalanceFactor(root->left) >= 0) {
        return rotateRight(root);
    }
    if (balanceFactor > 1 && getBalanceFactor(root->left) < 0) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }
    if (balanceFactor < -1 && getBalanceFactor(root->right) <= 0) {
        return rotateLeft(root);
    }
    if (balanceFactor < -1 && getBalanceFactor(root->right) > 0) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}

// Search for a given value in the AVL tree
bool searchNode(Node* node, int key) {
    if (node == nullptr) {
        return false;
    }
    if (node->key == key) {
        return true;
    } else if (node->key > key) {
        return searchNode(node->left, key);
    } else {
        return searchNode(node->right, key);
    }
}

// Driver code to test the AVL tree operations
int main() {
    Node* root = nullptr;

    // Insert nodes into the AVL tree
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 30);
    root = insertNode(root, 40);
    root = insertNode(root, 50);
    root = insertNode(root, 25);

    // Search for a node in the AVL tree
    int key = 40;
    if (searchNode(root, key)) {
        cout << "Node with key " << key << " is found in the AVL tree." << endl;
    } else {
        cout << "Node with key " << key << " is not found in the AVL tree." << endl;
    }

    // Delete a node from the AVL tree
    key = 30;
    root = deleteNode(root, key);

    // Search for a node in the AVL tree
    key = 30;
    if (searchNode(root, key)) {
        cout << "Node with key " << key << " is found in the AVL tree." << endl;
    } else {
        cout << "Node with key " << key << " is not found in the AVL tree." << endl;
    }

    return 0;
}
