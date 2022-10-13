#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::vector<std::string> v(8);
    for (int i = 0; i < 8; i++) {
        std::cin >> v[i];
    }

    for (int i = 0; i < 8; i++) {
        bool flag = 1;
        for (int j = 1; j < 8; j++) {
            if (v[i][j] != v[i][j - 1] || v[i][j] == 'B') {
                flag = 0;
            }
        }

        if (flag && v[i][0] != '.') {
            std::cout << v[i][0] << '\n';
            return;
        }
    }

    for (int i = 0; i < 8; i++) {
        bool flag = 1;
        for (int j = 1; j < 8; j++) {
            if (v[j][i] != v[j - 1][i] || v[j][i] == 'R') {
                flag = 0;
            }
        }

        if (flag && v[0][i] != '.') {
            std::cout << v[0][i] << '\n';
            return;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}