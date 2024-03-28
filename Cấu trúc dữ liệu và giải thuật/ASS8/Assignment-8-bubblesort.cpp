#include <iostream>
using namespace std;

void bubbleSort(int A[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (A[j] > A[j+1]) {
                swap(A[j], A[j+1]);
            }
        }
    }
}

int main() {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array
    bubbleSort(A, n); // Call the bubbleSort function
    cout << "Sorted array using bubble sort: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
