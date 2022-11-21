#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;
constexpr int N = 1e5;

void solve() {
    ll n, c, d;
    std::cin >> n >> c >> d;
    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), std::greater<int>());
    if (v[0] * d < c) {
        std::cout << "Impossible\n";
        return;
    } 

    if (std::accumulate(v.begin(), v.begin() + std::min(n, d), 0LL) >= c) {
        std::cout << "Infinity\n";
        return;
    }

    std::function<bool(ll)> check = [&] (ll x) {
        ll res = 0;
        for (int i = 0; i < std::min(n, x); i++) {
            res += v[i] * (d / x + ((d % x) > i));
        }
        return res >= c;
    };

    ll l = 0, r = 2e5;
    while (l < r) {
        ll m = (l + r + 1) / 2;
        if (check(m + 1)) {
            l = m;
        } else {
            r = m - 1;
        }
    }

    std::cout << r << '\n';
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