#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(vector<vector<int>>& graph, int start) {
    int num_nodes = graph.size();
    vector<bool> visited(num_nodes, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int curr_node = q.front();
        q.pop();
        cout << char('A' + curr_node) << " ";
        for (int i = 0; i < num_nodes; i++) {
            if (graph[curr_node][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
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
    
    cout << "BFS b?t d?u t? d?nh D: ";
    bfs(graph, 3);
    cout << endl;
    
    return 0;
}
