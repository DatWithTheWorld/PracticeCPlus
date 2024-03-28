#include <iostream>
using namespace std;

// Define a node structure for the AVL tree
struct Node {
    int value; // value of the node
    Node* left; // left child node
    Node* right; // right child node
    int height; // height of the node
};

// Create a new node for the AVL tree
Node* createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

// Calculate the height of a node in the AVL tree
int calculateHeight(Node* node) {
    if (node == NULL) {
        return 0;
    }
    return node->height;
}

// Calculate the balance factor of a node in the AVL tree
int calculateBalanceFactor(Node* node) {
    if (node == NULL) {
        return 0;
    }
    return calculateHeight(node->left) - calculateHeight(node->right);
}

// Rotate the AVL tree right at the given node
Node* rotateRight(Node* node) {
    Node* leftChild = node->left;
    Node* rightChild = leftChild->right;
    leftChild->right = node;
    node->left = rightChild;
    node->height = 1 + max(calculateHeight(node->left), calculateHeight(node->right));
    leftChild->height = 1 + max(calculateHeight(leftChild->left), calculateHeight(leftChild->right));
    return leftChild;
}

// Rotate the AVL tree left at the given node
Node* rotateLeft(Node* node) {
    Node* rightChild = node->right;
    Node* leftChild = rightChild->left;
    rightChild->left = node;
    node->right = leftChild;
    node->height = 1 + max(calculateHeight(node->left), calculateHeight(node->right));
    rightChild->height = 1 + max(calculateHeight(rightChild->left), calculateHeight(rightChild->right));
    return rightChild;
}

// Insert a node into the AVL tree
Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else if (value > root->value) {
        root->right = insertNode(root->right, value);
    } else {
        return root;
    }
    root->height = 1 + max(calculateHeight(root->left), calculateHeight(root->right));
    int balanceFactor = calculateBalanceFactor(root);
    if (balanceFactor > 1 && value < root->left->value) {
        return rotateRight(root);
    }
    if (balanceFactor < -1 && value > root->right->value) {
        return rotateLeft(root);
    }
    if (balanceFactor > 1 && value > root->left->value) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }
    if (balanceFactor < -1 && value < root->right->value) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }
    return root;
}

// Display the AVL tree in in-order
void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}

// Search for a given value in the AVL tree
bool searchValue(Node* root, int value) {
    if (root == NULL) return false;
    if (root->value == value) return true;
    if (value < root->value) {
        return searchValue(root->left, value);
    } else {
        return searchValue(root->right, value);
    }
}

// Find the node with the minimum value in the AVL tree
Node* findMinNode(Node* root) {
    if (root == NULL) return NULL;
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Delete a node from the AVL tree
Node* deleteNode(Node* root, int value) {
    if (root == NULL) {
        return root;
    }
    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->value) {
        root->right = deleteNode(root->right, value);
    } else {
        if (root->left == NULL || root->right == NULL) {
            Node* temp = root->left ?root->left : root->right;
            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else {
                *root = *temp;
            }
            delete temp;
        } else {
            Node* temp = findMinNode(root->right);
            root->value = temp->value;
            root->right = deleteNode(root->right, temp->value);
        }
    }
    if (root == NULL) {
        return root;
    }
    root->height = 1 + max(calculateHeight(root->left), calculateHeight(root->right));
    int balanceFactor = calculateBalanceFactor(root);
    if (balanceFactor > 1 && calculateBalanceFactor(root->left) >= 0) {
        return rotateRight(root);
    }
    if (balanceFactor > 1 && calculateBalanceFactor(root->left) < 0) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }
    if (balanceFactor < -1 && calculateBalanceFactor(root->right) <= 0) {
        return rotateLeft(root);
    }
    if (balanceFactor < -1 && calculateBalanceFactor(root->right) > 0) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }
    return root;
}

// Main function to test the AVL tree
int main() {
    Node* root = NULL;

    // Insert the given elements into the AVL tree
    root = insertNode(root, 63);
    root = insertNode(root, 9);
    root = insertNode(root, 19);
    root = insertNode(root, 27);
    root = insertNode(root, 18);
    root = insertNode(root, 108);
    root = insertNode(root, 99);
    root = insertNode(root, 81);

    // Display the AVL tree in in-order
    cout << "AVL Tree: ";
    inorderTraversal(root);
    cout << endl;

    // Search for a value in the AVL tree
    int value = 27;
    if (searchValue(root, value)) {
        cout << value << " found in AVL tree." << endl;
    } else {
        cout << value << " not found in AVL tree." << endl;
    }

    // Delete a node from the AVL tree
    value = 19;
    root = deleteNode(root, value);
    cout << "AVL Tree after deleting " << value << ": ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
