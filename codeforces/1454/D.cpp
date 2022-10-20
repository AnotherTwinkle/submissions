#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<ll, 2>;

void solve() {
    ll n;
    std::cin >> n;

    std::vector<pair> f;
    for (ll i = 2; i * i <= n; i++) {
        int x = 0;
        while (n % i == 0) {
            n /= i;
            x++;
        }

        if (x) f.push_back({i, x});
    }

    if (n > 1) f.push_back({n, 1});

    std::sort(f.begin(), f.end(), [] (pair a, pair b) {
        return a[1] > b[1];
    });

    std::cout << f[0][1] << '\n';
    for (int i = 0; i < f[0][1] - 1; i++) {
        std::cout << f[0][0] << " ";
    }

    ll ans = f[0][0];
    for (int i = 1; i < f.size(); i++) {
        for (int j = 0; j < f[i][1]; j++) {
            ans *= f[i][0];
        }
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