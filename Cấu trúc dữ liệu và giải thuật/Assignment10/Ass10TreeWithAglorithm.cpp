#include <iostream>
using namespace std;

// Define a node structure for the binary tree
struct Node {
    int value; // value of the node
    Node* left; // left child node
    Node* right; // right child node
};

// Create a new node for the binary tree
Node* createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Count the number of nodes of the tree
int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Count the number of leaves of the tree
int countLeaves(Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    return countLeaves(root->left) + countLeaves(root->right);
}

// Find the height of the tree
int findHeight(Node* root) {
    if (root == NULL) return 0;
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return 1 + max(leftHeight, rightHeight);
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    cout << "Number of nodes: " << countNodes(root) << endl;
    cout << "Number of leaves: " << countLeaves(root) << endl;
    cout << "Height of the tree: " << findHeight(root) << endl;
    return 0;
}
