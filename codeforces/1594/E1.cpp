#include <bits/stdc++.h>
using ll = long long;
const ll MOD = 1e9 + 7;

ll power(ll a, ll b) {
    if (!b) {
        return 1;
    }
    ll ans = power(a, b / 2);
    ans = (ans * ans) % MOD;
    if (b % 2) ans = (ans * a) % MOD;
    return ans;
}

void solve() {
    int n;
    std::cin >> n;

    ll nodes = (1LL << n) - 2;
    std::cout << (6LL * power(4, nodes) % MOD) % MOD << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }
}