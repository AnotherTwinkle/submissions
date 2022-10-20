#include <bits/stdc++.h>
using ll = long long;
constexpr int MOD = 1e9 + 7;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> x(n), y(n);
    for (int& i : x) std::cin >> i;
    for (int& j : y) std::cin >> j;

    std::vector<int> a(n + 1);
    for (int i = 0; i < n; i++) {
        a[x[i]] = y[i];
    }

    int ans = 1;
    std::vector<bool> done(n + 1);
    for (int i = 1; i <= n; i++) {
        if (done[i]) continue;

        int x = i;
        while (!done[x]) {
            done[x] = 1;
            x = a[x];
        }
        ans = 2 * ans % MOD;
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