#include <bits/stdc++.h>
using ll = long long;
constexpr int N = 100000;

// TLE B)
void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> x(N), y(N);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int c; std::cin >> c; c--;
            x[c].push_back(i), y[c].push_back(j);
        }
    }

    for (int i = 0; i < N; i++) {
        std::sort(x[i].begin(), x[i].end());
    }

    for (int i = 0; i < N; i++) {
        std::sort(y[i].begin(), y[i].end());
    }

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        int k = x[i].size();
        for (int j = 1; j < k; j++) ans += 1LL * j * (x[i][j] + y[i][j]);
        for (int j = 0; j < k - 1; j++) ans -= 1LL * (k - j - 1) * (x[i][j] + y[i][j]);
    }
    
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // std::cin >> t;
    while (t--) {
        solve();
    }
}