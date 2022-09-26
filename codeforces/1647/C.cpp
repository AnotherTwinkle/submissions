#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> v(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x; std::cin >> x;
            v[i][j] = x - '0';
        }
    }

    std::vector<std::array<int, 4>> ans;
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j > 0; j--) {
            if (v[i][j]) {
                ans.push_back({i + 1, j, i + 1, j + 1});
                v[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        if (v[0][j]) {
            std::cout << "-1\n";
            return;
        }
        for (int i = n - 1; i > 0; i--) {
            if (v[i][j]) {
                ans.push_back({i, j + 1, i + 1, j + 1});
                v[i][j] = 0;
            }
        }
    }

    std::cout << ans.size() << '\n';
    for (auto i : ans) {
        std::cout << i[0] << ' ' << i[1] << ' ' << i[2] << ' ' << i[3] << '\n';
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