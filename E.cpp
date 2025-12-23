#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    for (int u = 0; u < N; u++) {
        if (adj[v][u] && !visited[u]) {
            dfs(u);
        }
    }
}

int main() {
    cin.tie(nullptr);

    cin >> N;
    
    adj.assign(N, vector<int>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> adj[i][j];

    int edges = 0;
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            edges += adj[i][j];

    if (edges != N - 1) {
        cout << "NO";
        return 0;
    }

    visited.assign(N, false);
    dfs(0);

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            cout << "NO";
            return 0;
        }
    } cout << "YES";

    return 0;
}
