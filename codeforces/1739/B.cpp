#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n), ans(n);

    for (int& i : v) {
        std::cin >> i;
    }

    ans[0] = v[0];
    for (int i = 1; i < n; i++) {
        // Suck it, hackers.
        if (v[i] && ans[i - 1] - v[i] >= 0) {
            std::cout << "-1\n";
            return;
        }
        ans[i] = ans[i - 1] + v[i];
    }

    for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
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