#include <iostream>
using namespace std;

int binarySearch(int A[], int n, int x) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] == x) {
            return mid; // Return the index where x is found
        } else if (A[mid] < x) {
            low = mid + 1; // Search the right half of the array
        } else {
            high = mid - 1; // Search the left half of the array
        }
    }
    return -1; // Return -1 if x is not found in A
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array
    int x = 4; // The value to search for
    int index = binarySearch(A, n, x); // Call the binarySearch function
    if (index == -1) {
        cout << "Value " << x << " not found in the array." << endl;
    } else {
        cout << "Value " << x << " found at index " << index << " in the array." << endl;
    }
    return 0;
}
