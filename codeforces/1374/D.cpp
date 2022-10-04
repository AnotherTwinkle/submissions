#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::map<ll, ll> freq;
    for (int i = 0; i < n; i++) {
        ll x; std::cin >> x;
        x = k - (x % k);
        if (x != k) freq[x]++;
    }

    ll ans = 0;
    for (auto [x, y] : freq) {
        ans = std::max(ans, x + std::max(0LL, k * (y - 1) + 1));
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