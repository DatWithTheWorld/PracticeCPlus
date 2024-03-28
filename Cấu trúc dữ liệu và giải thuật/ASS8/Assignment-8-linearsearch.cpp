#include <iostream>
using namespace std;

int linearSearch(int A[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return i; // Return the index where x is found
        }
    }
    return -1; // Return -1 if x is not found in A
}

int main() {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array
    int x = 4; // The value to search for
    int index = linearSearch(A, n, x); // Call the linearSearch function
    if (index == -1) {
        cout << "Value " << x << " not found in the array." << endl;
    } else {
        cout << "Value " << x << " found at index " << index << " in the array." << endl;
    }
    return 0;
}
