#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> ans;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ans.push_back(std::max(i - 1, n - i) + std::max(j - 1, m - j));
        }
    }

    std::sort(ans.begin(), ans.end());
    for (int i = 0; i < n * m; i++) {
        std::cout << ans[i] << " \n"[i == n * m - 1];
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