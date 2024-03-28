#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int key;
    Node* next;
    
    Node(int k) {
        key = k;
        next = nullptr;
    }
};

class HashTable {
private:
    vector<Node*> table;
    
public:
    HashTable(int size) {
        table.resize(size, nullptr);
    }
    
    // hash function
    int hash(int key) {
        return key % table.size();
    }
    
    // function to insert a key into the hash table using chaining
    void insert(int key) {
        int index = hash(key);
        Node* node = new Node(key);
        if (table[index] == nullptr) {
            table[index] = node;
        } else {
            Node* curr = table[index];
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = node;
        }
    }
    
    // function to print out the hash table
    void print_table() {
        for (int i = 0; i < table.size(); i++) {
            cout << "Index " << i << ": ";
            Node* curr = table[i];
            while (curr != nullptr) {
                cout << curr->key << " ";
                curr = curr->next;
            }
            cout << endl;
        }
    }
};

int main() {
    // create a hash table of size 5
    HashTable hash_table(5);
    
    // insert the keys into the hash table using chaining
    hash_table.insert(2);
    hash_table.insert(7);
    hash_table.insert(6);
    hash_table.insert(12);
    hash_table.insert(23);
    hash_table.insert(11);
    hash_table.insert(22);
    hash_table.insert(19);
    hash_table.insert(1);
    hash_table.insert(3);
    hash_table.insert(5);
    hash_table.insert(32);
    hash_table.insert(4);
    hash_table.insert(9);
    hash_table.insert(15);
    
    // print out the hash table
    hash_table.print_table();
    
    return 0;
}
