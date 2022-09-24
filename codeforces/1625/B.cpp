#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::map<int, int> m;

    int ans = -1;
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        if (m[x]) {
            ans = std::max(ans, (n - i - 1) + m[x]);
        }
        m[x] = i + 1;
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