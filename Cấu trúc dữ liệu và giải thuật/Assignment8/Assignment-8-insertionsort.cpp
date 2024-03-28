#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && A[j] < A[j-1]) {
            swap(A[j], A[j-1]);
            j--;
        }
    }
}

int main() {
    int A[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array
    insertionSort(A, n); // Call the insertionSort function
    cout << "Sorted array using insertion sort: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
