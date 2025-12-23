#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> component;

void dfs(int v) {
    visited[v] = true;
    component.push_back(v + 1);
    for (int u = 0; u < n; u++) {
        if (adj[v][u] && !visited[u]) {
            dfs(u);
        }
    }
}

int main() {
    cin.tie(nullptr);

    cin >> n;
    adj.assign(n, vector<int>(n));
    visited.assign(n, false);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            adj[i][j] = s[j] - '0';
        }
    }

    vector<vector<int>> components;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            component.clear();
            dfs(i);
            components.push_back(component);
        }
    }

    cout << components.size() << "\n";

    for (auto &comp : components) {
        cout << comp.size() << "\n";
        for (int v : comp) {
            cout << v << " ";
        }
        cout << "\n";
    }

    return 0;
}
