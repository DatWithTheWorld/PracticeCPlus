#include <iostream>
#include <vector>

using namespace std;

// adjacency matrix representation of graph
void adjacency_matrix() {
    // create a 2D array of size 7x7
    int graph[7][7] = {
        {0, 1, 0, 1, 0, 0, 0},
        {1, 0, 1, 1, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {1, 1, 0, 0, 1, 1, 0},
        {0, 1, 1, 1, 0, 1, 1},
        {0, 0, 0, 1, 1, 0, 1},
        {0, 0, 0, 0, 1, 1, 0}
    };
    
    // print the matrix
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

// adjacency list representation of graph
void adjacency_list() {
    // create an array of linked lists
    vector<int> adj_list[7];
    
    // add edges to the linked lists
    adj_list[0] = {1, 3};
    adj_list[1] = {0, 2, 3, 4};
    adj_list[2] = {1, 4};
    adj_list[3] = {0, 1, 4, 5};
    adj_list[4] = {1, 2, 3, 5, 6};
    adj_list[5] = {3, 4, 6};
    adj_list[6] = {4, 5};
    
    // print the linked lists
    for (int i = 0; i < 7; i++) {
        cout << i << ": ";
        for (int j = 0; j < adj_list[i].size(); j++) {
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }
}

// weighted matrix representation of graph
void weighted_matrix() {
    // create a 2D array of size 7x7
    int graph[7][7] = {
        {0, 2, 0, 3, 0, 0, 0},
        {2, 0, 1, 4, 3, 0, 0},
        {0, 1, 0, 0, 2, 0, 0},
        {3, 4, 0, 0, 1, 2, 0},
        {0, 3, 2, 1, 0, 2, 1},
        {0, 0, 0, 2, 2, 0, 3},
        {0, 0, 0, 0, 1, 3, 0}
    };
    
    // print the matrix
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // adjacency matrix representation of graph
    cout << "Adjacency matrix:" << endl;
    adjacency_matrix();
    cout << endl;
    
    // adjacency list representation of graph
    cout << "Adjacency list:" << endl;
    adjacency_list();
    cout << endl;
    
    // weighted matrix representation of graph
    cout << "Weighted matrix:" << endl;
    weighted_matrix();
    cout << endl;
    
    return 0;
}
