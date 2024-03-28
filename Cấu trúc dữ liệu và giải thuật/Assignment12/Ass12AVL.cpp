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
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Get the height of a node in the AVL tree
int getHeight(Node* node) {
    if (node == NULL) {
        return 0;
    }
    return node->height;
}

// Get the balance factor of a node in the AVL tree
int getBalanceFactor(Node* node) {
    if (node == NULL) {
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
    if (node == NULL) {
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
    if (node == NULL) {
        return node;
    }
    while (node->left != NULL) {
        node = node->left;
    }
    return node;
}

// Delete a node from the AVL tree
Node* deleteNode(Node* root, int key) {
    // Perform the standard BST deletion
    if (root == NULL) {
        return root;
    }
    if (key < root->key) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->key) {
        root->right = deleteNode(root->right, key);
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
        root->right = deleteNode(root->right, temp->key);
    }

    // If the treeTi?p t?c ph?n code C++ d? hoàn thành vi?c xóa node trong cây AVL:


    // If the tree is empty after deletion, return
    if (root == NULL) {
        return root;
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

// Inorder traversal of the AVL tree
void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->key << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = NULL;

    // Insert nodes into the AVL tree
    root = insertNode(root, 18);
    root = insertNode(root, 81);
    root = insertNode(root, 29);
    root = insertNode(root, 15);
    root = insertNode(root, 19);
    root = insertNode(root, 25);
    root = insertNode(root, 26);
    root = insertNode(root, 1);

    cout << "AVL tree after inserting nodes: ";
    inorderTraversal(root);
    cout << endl;

    // Delete nodes from the AVL tree
    root = deleteNode(root, 39);
    root = deleteNode(root, 63);
    root = deleteNode(root, 15);
    root = deleteNode(root, 1);

    cout << "AVL tree after deleting nodes: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
