#include <iostream>
#include <vector>

using namespace std;

class HashTable {
private:
    vector<int> table;
    
public:
    HashTable(int size) {
        table.resize(size, -1);
    }
    
    // hash function
    int hash(int key) {
        return key % table.size();
    }
    
    // function to insert a key into the hash table
    void insert(int key) {
        int index = hash(key);
        while (table[index] != -1) {
            index = (index + 1) % table.size();
        }
        table[index] = key;
    }
    
    // function to print out the hash table
    void print_table() {
        for (int i = 0; i < table.size(); i++) {
            cout << "Index " << i << ": ";
            if (table[i] != -1) {
                cout << table[i];
            }
            cout << endl;
        }
    }
};

int main() {
    // create a hash table of size 10
    HashTable hash_table(10);
    
    // insert the keys into the hash table
    hash_table.insert(17);
    hash_table.insert(12);
    hash_table.insert(26);
    hash_table.insert(42);
    hash_table.insert(23);
    hash_table.insert(18);
    hash_table.insert(22);
    hash_table.insert(9);
    hash_table.insert(16);
    hash_table.insert(35);
    hash_table.insert(15);
    
    // print out the hash table
    hash_table.print_table();
    
    return 0;
}
