#include <iostream>
using namespace std;

// Define a node structure for the binary search tree
struct Node {
    int value; // value of the node
    Node* left; // left child node
    Node* right; // right child node
};

// Create a new node for the binary search tree
Node* createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Insert a node into the binary search tree
Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else if (value > root->value) {
        root->right = insertNode(root->right, value);
    }
    return root;
}

// Traverse the binary search tree in pre-order
void preorderTraversal(Node* root) {
    if (root == NULL) return;
    cout << root->value << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Traverse the binary search tree in in-order
void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}

// Traverse the binary search tree in post-order
void postorderTraversal(Node* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->value << " ";
}

// Find the smallest element in the binary search tree
int findSmallest(Node* root) {
    if (root == NULL) {
        cerr << "Error: Tree is empty" << endl;
        return -1;
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root->value;
}

// Find the largest element in the binary search tree
int findLargest(Node* root) {
    if (root == NULL) {
        cerr << "Error: Tree is empty" << endl;
        return -1;
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->value;
}

// Find a given value in the binary search tree
bool findValue(Node* root, int value) {
    if (root == NULL) return false;
    if (root->value == value) return true;
    if (value < root->value) {
        return findValue(root->left, value);
    } else {
        return findValue(root->right, value);
    }
}

// Count the number of nodes in the binary search tree
int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Count the number of internal nodes in the binary search tree
int countInternalNodes(Node* root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return 0;
    }
    return 1 + countInternalNodes(root->left) + countInternalNodes(root->right);
}

// Determine the height of the binary search tree
int findHeight(Node* root) {
    if (root == NULL) return 0;
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return 1 + max(leftHeight, rightHeight);
}

// Delete a node from the binary search tree
Node* deleteNode(Node* root, int value) {
    if (root == NULL) {
        return root;
    }
    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->value) {
        root->right = deleteNode(root->right, value);
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
        Node* temp = root->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}

int main() {
    Node* root = NULL;
    root = insertNode(root, 50);
// Insert nodes into the binary search tree
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // Traverse the binary search tree
    cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;
    cout << "Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;

    // Find the smallest and largest elements in the binary search tree
    cout << "Smallest element: " << findSmallest(root) << endl;
    cout << "Largest element: " << findLargest(root) << endl;

    // Find a given value in the binary search tree
    cout << "Finding value 40: " << findValue(root, 40) << endl;
    cout << "Finding value 100: " << findValue(root, 100) << endl;

    // Count the number of nodes and internal nodes in the binary search tree
    cout << "Number of nodes: " << countNodes(root) << endl;
    cout << "Number of internal nodes: " << countInternalNodes(root) << endl;

    // Determine the height of the binary search tree
    cout << "Height of the tree: " << findHeight(root) << endl;

    // Delete a node from the binary search tree
    root = deleteNode(root, 20);
    cout << "Inorder traversal after deleting node 20: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
