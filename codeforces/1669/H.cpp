#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(31, n);
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        for (int j = 0; j < 31; j++) {
            v[j] -= (x >> j) % 2;
        }
    }

    int ans = 0;
    for (int i = 30; i >= 0; i--) {
        if (v[i] <= k) {
            ans += 1 << i;
            k -= v[i];
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