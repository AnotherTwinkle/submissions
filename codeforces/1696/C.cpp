#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int m; std::cin >> m;
    std::vector<ll> w(m);
    for (int i = 0; i < m; i++) {
        std::cin >> w[i];
    }

    auto breakdown = [&](ll a) {
        ll b = 1;
        while (a % k == 0) {
            a /= k;
            b *= k;
        }
        return std::array<ll, 2>({a, b});
    };

    auto process = [&](auto& a) {
        std::vector<std::array<ll, 2>> res;
        for (int i = 0; i < a.size(); i++) {
            std::array<ll, 2> pair = breakdown(a[i]);

            if (res.size() && res.back()[0] == pair[0]) {
                res.back()[1] += pair[1];
            } else {
                res.push_back(pair);
            }
        }
        return res;
    };

    std::cout << (process(v) == process(w) ? "Yes\n" : "No\n");
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