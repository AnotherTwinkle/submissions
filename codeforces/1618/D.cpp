#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end(), std::greater<int>());

    ll ans = 0;
    for (int i = 0; i < k; i++) {
        if (v[i] == v[i + k]) ans++;
    }

    ans += std::accumulate(v.begin() + 2 * k, v.end(), 0LL);
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