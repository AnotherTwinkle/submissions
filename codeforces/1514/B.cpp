#include <bits/stdc++.h>
using ll = long long;
constexpr int MOD = 1e9 + 7;

void solve() {
    ll n, k;
    std::cin >> n >> k;

    ll ans = 1;
    for (int i = 0; i < k; i++) {
        ans = (ans * n) % MOD;
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