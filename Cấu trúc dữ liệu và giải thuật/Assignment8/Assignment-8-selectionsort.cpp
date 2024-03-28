#include <iostream>
using namespace std;

void selectionSort(int A[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }
        swap(A[i], A[minIndex]);
    }
}

int main() {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array
    selectionSort(A, n); // Call the selectionSort function
    cout << "Sorted array using selection sort: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
