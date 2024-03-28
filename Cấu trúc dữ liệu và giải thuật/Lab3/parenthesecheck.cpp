#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool parentheses_checker(string expression) {
    stack<char> s;
    for (int i;i<expression.length();i++) {
    	char c = expression[i];
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) {
                return false;
            } else if ((c == ')' && s.top() == '(') ||
                       (c == '}' && s.top() == '{') ||
                       (c == ']' && s.top() == '[')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string expression1 = "{A + (B – C)}";
    string expression2 = "(A+B}";
    cout << boolalpha << parentheses_checker(expression1) << endl; // Output: true
    cout << boolalpha << parentheses_checker(expression2) << endl; // Output: false
    return 0;
}
