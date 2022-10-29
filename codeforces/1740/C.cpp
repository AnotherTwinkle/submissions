#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        ans = std::max(ans, v[i + 1] + v[n - 1] - 2 * v[i]);
    }

    for (int i = n - 1; i > 1; i--) {
        ans = std::max(ans, 2 * v[i] - v[i - 1] - v[0]);
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
}