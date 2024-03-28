#include <iostream>
#include <vector>

using namespace std;

// function to perform heapify down operation
void heapify_down(vector<int> &arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify_down(arr, n, largest);
    }
}

// function to build a max heap from an array
void build_max_heap(vector<int> &arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify_down(arr, n, i);
    }
}

int main() {
    // create an array of numbers
    vector<int> arr = {4, 6, 12, 7, 9, 21, 39, 13, 19, 10};
    
    // build a max heap from the array
    build_max_heap(arr);
    
    // print out the max heap
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
