#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);

    int N, M; cin >> N >> M;

    vector<vector<int>> adj(N + 1, vector<int>(N + 1, 0));

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
