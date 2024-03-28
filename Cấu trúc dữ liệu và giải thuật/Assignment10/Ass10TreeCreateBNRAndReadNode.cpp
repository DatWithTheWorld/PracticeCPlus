#include <iostream>
#include <queue>
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

// Create the binary tree with the given structure
Node* createBinaryTree() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    return root;
}

// Traverse the binary tree in in-order
void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}

// Traverse the binary tree in pre-order
void preorderTraversal(Node* root) {
    if (root == NULL) return;
    cout << root->value << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Traverse the binary tree in post-order
void postorderTraversal(Node* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->value << " ";
}

// Traverse the binary tree in level-order (BFS)
void levelorderTraversal(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* node = q.front();
        q.pop();
        cout << node->value << " ";
        if (node->left != NULL) {
            q.push(node->left);
        }
        if (node->right != NULL) {
            q.push(node->right);
        }
    }
}

int main() {
    Node* root = createBinaryTree();
    cout << "In-order traversal: ";
    inorderTraversal(root);
    cout << endl;
    cout << "Pre-order traversal: ";
    preorderTraversal(root);
    cout << endl;
    cout << "Post-order traversal: ";
    postorderTraversal(root);
    cout << endl;
    cout << "Level-order traversal: ";
    levelorderTraversal(root);
    cout << endl;
    return 0;
}
