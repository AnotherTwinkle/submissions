#include <bits/stdc++.h>
using ll = long long;

// Bruteforce Bruteforce where you are
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    ll ans = 1e18;
    for (int i = 0; i < n; i++) {
        ll moves = 0;
        std::vector<ll> temp(n);

        for (int j = i + 1; j < n; j++) {
            ll x = temp[j - 1] / v[j] + 1;
            temp[j] = 1LL * v[j] * x;
            moves += x;
        }

        for (int j = i - 1; j >= 0; j--) {
            ll x = temp[j + 1] / v[j] + 1;
            temp[j] = 1LL * v[j] * x;
            moves += x;
        }

        ans = std::min(ans, moves);
    }

    std::cout << ans << '\n';
}