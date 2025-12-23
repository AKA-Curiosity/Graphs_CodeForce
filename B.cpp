#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);

    int N; cin >> N;

    vector<vector<int>> adj(N + 1, vector<int>(N + 1));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> adj[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (adj[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
