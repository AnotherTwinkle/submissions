#include <bits/stdc++.h>
using ll = long long;

// If there are two zeros that line up ans is o
// If there's a single zero it's o - 1
// If there's no zero at all, the ans is o - 2

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<bool>> v(n, std::vector<bool>(m));
    std::vector<std::vector<bool>> r(m, std::vector<bool>(n));
    int z = 0, o = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x; std::cin >> x;
            if (x == '0') z++;
            else v[i][j] = 1, r[j][i] = 1, o++;
        }
    }

    if (z < 2) {
        std::cout << std::max(o - !z - 1, 0) << '\n';
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        std::vector<bool> b(m);
        for (int j = 0; j < m; j++) {
            b[j] = v[i][j] & v[i + 1][j];
        }

        for (int j = 0; j < m - 1; j++) {
            if (!(b[j] || b[j + 1])) {
                std::cout << o << '\n';
                return;
            }
        }
    }

    for (int i = 0; i < m - 1; i++) {
        std::vector<bool> b(n);
        for (int j = 0; j < n; j++) {
            b[j] = r[i][j] & r[i + 1][j];
        }

        for (int j = 0; j < n - 1; j++) {
            if (!(b[j] || b[j + 1])) {
                std::cout << o << '\n';
                return;
            }
        }
    }

    std::cout << std::max(o - 1, 0) << '\n';
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