#include <iostream>
#include <vector>

using namespace std;

// function to perform bubble sort on an array
void bubble_sort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    // create an array of numbers
    vector<int> arr = {35, 46, 52, 62, 43, 21, 24, 17};
    
    // sort the array in ascending order using bubble sort
    bubble_sort(arr);
    
    // print out the sorted array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
