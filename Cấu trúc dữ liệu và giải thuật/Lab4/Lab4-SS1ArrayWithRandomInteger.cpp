#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to input data into the array
void inputArray(int A[], int n) {
    cout << "Enter " << n << " integers between 1 and 1000:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
}

// Function to output data from the array
void outputArray(int A[], int n) {
    cout << "Array contents:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Function to perform bubble sort
void bubbleSort(int A[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (A[j] > A[j+1]) {
                swap(A[j], A[j+1]);
            }
        }
    }
}

// Function to perform selection sort
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

// Function to perform insertion sort
void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i-1;
        while (j >= 0 && A[j] > key) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

// Function to perform linear search
int linearSearch(int A[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return i;
        }
    }
    return -1;
}

// Function to perform binary search
int binarySearch(int A[], int n, int x) {
    int left = 0, right = n-1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (A[mid] == x) {
            return mid;
        } else if (A[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    const int n = 100;
    int A[n];
    
    // Generate random numbers between 1 and 1000
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 1000 + 1;
    }
    
    // Input and output array
    inputArray(A, n);
    outputArray(A, n);
    
    // Sort the array using bubble sort
    clock_t t1 = clock();
    bubbleSort(A, n);
    clock_t t2 = clock();
    double bubbleSortTime = (double)(t2 - t1) / CLOCKS_PER_SEC;
    
    // Sort the array using selection sort
    t1 = clock();
    selectionSort(A, n);
    t2 = clock();
    double selectionSortTime = (double)(t2 - t1) / CLOCKS_PER_SEC;
    
    // Sort the array using insertion sort
    t1 = clock();
    insertionSort(A, n);
    t2 = clock();
    double insertionSortTime = (double)(t2 - t1) / CLOCKS_PER_SEC;
    
    // Output the execution times to a file
    ofstream fout("SortingTime.txt");
    fout << "Bubble sort time: " << bubbleSortTime << " seconds" << endl;
    fout << "Selection sort time: " << selectionSortTime << " seconds" << endl;
    fout << "Insertion sort time: " << insertionSortTime << " seconds" << endl;
    fout.close();
    
    // Search for an element using linear search
    int x;
    cout << "Enter an integer to search: ";
    cin >> x;
    int linearIndex = linearSearch(A, n, x);
    if (linearIndex == -1) {
        cout << x << " not found in the array." << endl;
    } else {
        cout << x << " found at index " << linearIndex << " using linear search." << endl;
    }
    
    // Search for an element using binary search
    cout << "Enter another integer to search: ";
    cin >> x;
    int binaryIndex = binarySearch(A, n, x);
    if (binaryIndex == -1) {
        cout << x << " not found in the array." << endl;
    } else {
        cout << x << " found at index " << binaryIndex << " using binary search." << endl;
    }
    
    return 0;
}
