#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);

    int N, M; cin >> N >> M;

    vector<int> cnt(N + 1, 0);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        cnt[u]++;
        cnt[v]++;
    }

    for (int i = 1; i <= N; i++) {
        cout << cnt[i] << " ";
    } cout << "\n";

    return 0;
}
