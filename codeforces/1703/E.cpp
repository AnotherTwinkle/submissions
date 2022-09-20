#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    int v[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char x; std::cin >> x;
            v[i][j] = x - '0';
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int o = v[i][j] + v[n - i - 1][n- j - 1] + v[j][n - i - 1] + v[n - j - 1][i];
            int z = !v[i][j] + !v[n- i - 1][n - j - 1] + !v[j][n - i - 1] + !v[n - j - 1][i];
            v[i][j] = v[n - i - 1][n- j - 1] = v[j][n - i - 1] = v[n - j - 1][i];
            ans += std::min(o, z);
        }
    }

    std::cout << ans << '\n';
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