#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void build_max_heap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void insert_element(vector<int>& arr, int element) {
    arr.push_back(element);
    int i = arr.size() - 1;
    while (i > 0 && arr[(i-1)/2] < arr[i]) {
        swap(arr[i], arr[(i-1)/2]);
        i = (i-1)/2;
    }
}

void delete_element(vector<int>& arr, int element) {
    int n = arr.size();
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            break;
        }
    }
    if (i == n) {
        cout << "Element not found in heap." << endl;
        return;
    }
    swap(arr[i], arr[n-1]);
    arr.pop_back();
    heapify(arr, n-1, i);
}

void heap_sort(vector<int>& arr) {
    int n = arr.size();
    build_max_heap(arr);
    for (int i = n-1; i >= 1; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void print_heap(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {45, 36, 54, 27, 63, 72, 61, 18};

    // Build max heap
    build_max_heap(arr);
    cout << "Max heap: ";
    print_heap(arr);

    // Insert element
    insert_element(arr, 80);
    cout << "Max heap after inserting 80: ";
    print_heap(arr);

    // Delete element
    delete_element(arr, 54);
    cout << "Max heap after deleting 54: ";
    print_heap(arr);

    // Heap sort
    heap_sort(arr);
    cout << "Numbers sorted in descending order: ";
    print_heap(arr);

    return 0;
}
