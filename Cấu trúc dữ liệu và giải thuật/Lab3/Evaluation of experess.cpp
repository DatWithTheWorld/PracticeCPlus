#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        if (isalnum(c))
            postfix += c;
        else if (c == '(')
            s.push(c);
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else {
            while (!s.empty() && precedence(c) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
        cout << postfix << endl;
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int evaluatePostfix(string postfix) {
    stack<int> s;
    for (int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];
        if (isdigit(c))
            s.push(c - '0');
        else {
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();
            switch (c) {
                case '+': s.push(op1 + op2); break;
                case '-': s.push(op1 - op2); break;
                case '*': s.push(op1 * op2); break;
                case '/': s.push(op1 / op2); break;
            }
        }
    }
    return s.top();
}

int main() {
    string infix = "(a+b)*(c+d)";
    string postfix = infixToPostfix(infix);
    cout << "Infix expression: " << infix << endl;
    cout << "Postfix expression: " << postfix << endl;
    int result = evaluatePostfix(postfix);
    cout << "Result = " << result << endl;
    return 0;
}
