#include <iostream>
#include <cstring>

using namespace std;

const int MAX_PRODUCTS = 10;

struct Product {
    int code;
    char name[41];
    float price;
};

struct HashTable {
    Product products[MAX_PRODUCTS];
    bool occupied[MAX_PRODUCTS];

    HashTable() {
        memset(occupied, false, sizeof(occupied));
    }

    int hash(int key) {
        return key % MAX_PRODUCTS;
    }

    void add_product(Product product) {
        int index = hash(product.code);
        if (!occupied[index]) {
            products[index] = product;
            occupied[index] = true;
        } else {
            // Linear probing
            int i = (index + 1) % MAX_PRODUCTS;
            while (i != index && occupied[i]) {
                i = (i + 1) % MAX_PRODUCTS;
            }
            if (i == index) {
                cout << "Hash table is full." << endl;
            } else {
                products[i] = product;
                occupied[i] = true;
            }
        }
    }

    void print_products() {
        cout << "Code\tName\t\tPrice" << endl;
        for (int i = 0; i < MAX_PRODUCTS; i++) {
            if (occupied[i]) {
                cout << products[i].code << "\t" << products[i].name << "\t" << products[i].price << endl;
            }
        }
    }

    void search_product(int code) {
        int index = hash(code);
        if (occupied[index] && products[index].code == code) {
            cout << "Code\tName\t\tPrice" << endl;
            cout << products[index].code << "\t" << products[index].name << "\t" << products[index].price << endl;
        } else {
            // Linear probing
            int i = (index + 1) % MAX_PRODUCTS;
            while (i != index && !(occupied[i] && products[i].code == code)) {
                i = (i + 1) % MAX_PRODUCTS;
            }
            if (i == index) {
                cout << "Product not found." << endl;
            } else {
                cout << "Code\tName\t\tPrice" << endl;
                cout << products[i].code << "\t" << products[i].name << "\t" << products[i].price << endl;
            }
        }
    }

    void remove_product(int code) {
        int index = hash(code);
        if (occupied[index] && products[index].code == code) {
            occupied[index] = false;
        } else {
            // Linear probing
            int i = (index + 1) % MAX_PRODUCTS;
            while (i != index && !(occupied[i] && products[i].code == code)) {
                i = (i + 1) % MAX_PRODUCTS;
            }
            if (i == index) {
                cout << "Product not found." << endl;
            } else {
                occupied[i] = false;
            }
        }
    }
};

int main() {
    HashTable hash_table;

    // Add products
    Product p1 = {10001, "Sugar", 50000};
    Product p2 = {10002, "Salt", 7500};
    Product p3 = {10003, "Rice", 15000};
    Product p4 = {10004, "Fish sauce", 30000};
    hash_table.add_product(p1);
    hash_table.add_product(p2);
    hash_table.add_product(p3);
    hash_table.add_product(p4);

    // Print products
    hash_table.print_products();

    // Search for product
    hash_table.search_product(10003);

    // Remove product
    hash_table.remove_product(10002);

    // Print products after removal
    cout << "Products after removal: " << endl;
    hash_table.print_products();

    return 0;
}
