#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::vector<ll> gcd(2), ans(2, 1);
    for (int i = 0; i < n; i++) {
        gcd[i % 2] = std::__gcd(gcd[i % 2], v[i]);
    }

    for (int i = 0; i < n; i++) {
        if (v[i] % gcd[!(i % 2)] == 0) {
            ans[!(i % 2)] = 0;
        }
    }

    if (!(ans[0] || ans[1])) {
        std::cout << "0\n";
    } else {
        std::cout << gcd[ans[0] < ans[1]] << '\n';
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