#include <iostream>
#include <vector>
using namespace std;

int N, S;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    for (int u = 0; u < N; u++) {
        if (adj[v][u] == 1 && !visited[u]) {
            dfs(u);
        }
    }
}

int main() {
    cin.tie(nullptr);

    cin >> N >> S;

    adj.assign(N, vector<int>(N));
    visited.assign(N, false);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> adj[i][j];

    dfs(S - 1);
    
    int count = 0;
    for (int i = 0; i < N; i++)
        if (visited[i])
            count++;
    cout << count - 1;

    return 0;
}
