#include <iostream>
#include <vector>

using namespace std;

// function to perform heapify down operation on a node
void heapify_down(vector<int> &heap, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && heap[left] > heap[largest]) {
        largest = left;
    }
    
    if (right < n && heap[right] > heap[largest]) {
        largest = right;
    }
    
    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify_down(heap, n, largest);
    }
}

// function to build a max heap from an array
void build_max_heap(vector<int> &heap) {
    int n = heap.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify_down(heap, n, i);
    }
}

int main() {
    // create an array of numbers
    vector<int> arr = {50, 64, 52, 20, 43, 32, 61, 12};
    
    // build a max heap from the array
    build_max_heap(arr);
    
    // print out the max heap
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
