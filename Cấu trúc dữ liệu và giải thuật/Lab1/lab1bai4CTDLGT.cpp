#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void inputArray(int* &arr, int size);
void printArray(int* arr, int size);

int main() {
    int size;
    int* arr;
    cin >> size;

    inputArray(arr, size);
    printArray(arr, size);

    delete[] arr;

    return 0;
}

void inputArray(int* &arr, int size) {
    arr = new int[size];

    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
