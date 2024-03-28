#include <iostream>
#include <vector>

using namespace std;

// function to calculate hash value
int hash(int key, int n) {
    return key % n;
}

// function to add a value to the hash table
void add(vector<int> table[], int key, int n) {
    int index = hash(key, n);
    table[index].push_back(key);
}

// function to print out the hash table
void print_table(vector<int> table[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < table[i].size(); j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}

// function to search for a value in the hash table
bool search(vector<int> table[], int key, int n) {
    int index = hash(key, n);
    for (int i = 0; i < table[index].size(); i++) {
        if (table[index][i] == key) {
            return true;
        }
    }
    return false;
}

// function to remove a value from the hash table
bool remove(vector<int> table[], int key, int n) {
    int index = hash(key, n);
    for (int i = 0; i < table[index].size(); i++) {
        if (table[index][i] == key) {
            table[index].erase(table[index].begin() + i);
            return true;
        }
    }
    return false;
}

int main() {
    // create a hash table with 9 memory locations
    int n = 9;
    vector<int> table[n];
    
    // add numbers to the table
    add(table, 5, n);
    add(table, 14, n);
    add(table, 28, n);
    add(table, 19, n);
    add(table, 20, n);
    
    // print out the hash table
    print_table(table, n);
    
    // search for a value
    int key1 = 19;
    if (search(table, key1, n)) {
        cout << key1 << " is found in the table." << endl;
    } else {
        cout << key1 << " is not found in the table." << endl;
    }
    
    // remove a value
    int key2 = 28;
    if (remove(table, key2, n)) {
        cout << key2 << " is removed from the table." << endl;
    } else {
        cout << key2 << " is not found in the table." << endl;
    }
    
    // print out the hash table again
    print_table(table, n);
    
    return 0;
}
