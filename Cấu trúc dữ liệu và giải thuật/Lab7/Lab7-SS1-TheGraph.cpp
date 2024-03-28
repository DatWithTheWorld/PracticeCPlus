#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(vector<vector<int>>& adj_matrix, int n, int start) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int curr_node = q.front();
        q.pop();
        cout << curr_node << " ";
        for (int i = 0; i < n; i++) {
            if (adj_matrix[curr_node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

void dfs_util(vector<vector<int>>& adj_matrix, vector<bool>& visited, int node) {
    visited[node] = true;
    cout << node << " ";
    for (int i = 0; i < adj_matrix.size(); i++) {
        if (adj_matrix[node][i] == 1 && !visited[i]) {
            dfs_util(adj_matrix, visited, i);
        }
    }
}

void dfs(vector<vector<int>>& adj_matrix, int n, int start) {
    vector<bool> visited(n, false);
    dfs_util(adj_matrix, visited, start);
}

int main() {
    int n = 9;
    vector<vector<int>> adj_matrix(n, vector<int>(n, 0));
    adj_matrix[0][2] = 1;
    adj_matrix[0][5] = 1;
    adj_matrix[0][3] = 1;
    adj_matrix[0][4] = 1;
    adj_matrix[1][2] = 1;
    adj_matrix[1][6] = 1;
    adj_matrix[1][3] = 1;
    adj_matrix[2][3] = 1;
    adj_matrix[2][8] = 1;
    adj_matrix[3][4] = 1;
    adj_matrix[3][8] = 1;
    adj_matrix[4][5] = 1;
    adj_matrix[4][8] = 1;
    adj_matrix[5][8] = 1;
    adj_matrix[6][7] = 1;
    adj_matrix[6][8] = 1;
    adj_matrix[8][7] = 1;

    cout << "BFS traversal: ";
    bfs(adj_matrix, n, 0);

    cout << "\nDFS traversal: ";
    dfs(adj_matrix, n, 0);

    return 0;
}
