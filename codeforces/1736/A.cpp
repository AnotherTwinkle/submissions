#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    int ans = 0, o = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
        o += v[i];
    }

    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        if (x != v[i]) ans++;
        o -= x;
    }

    std::cout << std::min(ans, std::abs(o) + 1) << '\n';
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