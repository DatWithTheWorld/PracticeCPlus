#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& graph, vector<bool>& visited, int curr_node) {
    visited[curr_node] = true;
    cout << char('A' + curr_node) << " ";
    for (int i = 0; i < graph.size(); i++) {
        if (graph[curr_node][i] && !visited[i]) {
            dfs(graph, visited, i);
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {0, 1, 0, 1, 0, 0, 0},
        {1, 0, 1, 1, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {1, 1, 0, 0, 1, 1, 0},
        {0, 1, 1, 1, 0, 1, 1},
        {0, 0, 0, 1, 1, 0, 1},
        {0, 0, 0, 0, 1, 1, 0}
    };
    
    vector<bool> visited(graph.size(), false);
    cout << "DFS b?t d?u t? d?nh B: ";
    dfs(graph, visited, 1);
    cout << endl;
    
    return 0;
}
