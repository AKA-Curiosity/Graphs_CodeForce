#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr);

    int N; cin >> N;
    int ones = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int x;
            cin >> x;
            if (x == 1)
                ones++;
        }
    } cout << ones / 2 << "\n";

    return 0;
}
