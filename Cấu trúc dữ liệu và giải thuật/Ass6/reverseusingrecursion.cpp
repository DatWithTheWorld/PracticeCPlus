#include <iostream>
#include <string>

using namespace std;

void reverseStringUsingRecursion(string str) {
    if (str.length() == 0) {
        return;
    } else {
        reverseStringUsingRecursion(str.substr(1));
        cout << str[0];
    }
}

int main() {
    string str = "hello";

    cout << "Chu?i ban d?u: " << str << endl;
    cout << "Chu?i d?o ngu?c s? d?ng d? quy: ";
    reverseStringUsingRecursion(str);
    cout << endl;

    return 0;
}
