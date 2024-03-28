#include <iostream>
#include <string>
#include <stack>
using namespace std;

// Define a node structure for the binary tree
struct Node {
    char value; // value of the node, either an operator or an operand
    Node* left; // left child node
    Node* right; // right child node
};

// Create a new node for the binary tree
Node* createNode(char value) {
    Node* node = new Node;
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Create a binary tree to represent the given expression
Node* createBinaryTree(string expression) {
    stack<Node*> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == ' ') continue;
        Node* node = createNode(expression[i]);
        if (isdigit(expression[i])) {
            s.push(node);
        } else {
            node->right = s.top();
            s.pop();
            node->left = s.top();
            s.pop();
            s.push(node);
        }
    }
    return s.top();
}

// Traverse the binary tree in pre-order to print the expression in prefix form
void printPrefix(Node* root) {
    if (root == NULL) return;
    cout << root->value << " ";
    printPrefix(root->left);
    printPrefix(root->right);
}

// Traverse the binary tree in in-order to print the expression in infix form
void printInfix(Node* root) {
    if (root == NULL) return;
    if (root->value == '+' || root->value == '-' || root->value == '*' || root->value == '/') {
        cout << "(";
    }
    printInfix(root->left);
    cout << root->value << " ";
    printInfix(root->right);
    if (root->value == '+' || root->value == '-' || root->value == '*' || root->value == '/') {
        cout << ")";
    }
}

// Traverse the binary tree in post-order to print the expression in postfix form
void printPostfix(Node* root) {
    if (root == NULL) return;
    printPostfix(root->left);
    printPostfix(root->right);
    cout << root->value << " ";
}

// Evaluate the postfix expression to compute its value using a stack data structure
int evaluatePostfix(string postfix) {
    stack<int> s;
    for (int i = 0; i < postfix.length(); i++) {
        if (isdigit(postfix[i])) {
            s.push(postfix[i] - '0');
        } else {
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            switch (postfix[i]) {
                case '+':
                    s.push(operand1 + operand2);
                    break;
                case '-':
                    s.push(operand1 - operand2);
                    break;
                case '*':
                    s.push(operand1 * operand2);
                    break;
                case '/':
                    s.push(operand1 / operand2);
                    break;
            }
        }
    }
    return s.top();
}

int main() {
    string expression = "8 5 - 4 2 + 3 / *";
    Node* root = createBinaryTree(expression);
    cout << "Prefix form: ";
    printPrefix(root);
    cout << endl;
    cout << "Infix form: ";
    printInfix(root);
    cout << endl;
    cout << "Postfix form: ";
    printPostfix(root);
    cout << endl;
    int value = evaluatePostfix(expression);
    cout << "Value: " << value << endl;
    return 0;
}
