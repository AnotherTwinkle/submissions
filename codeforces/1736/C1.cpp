#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    ll ans = n;
    int p = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] > p) {
            ans += p, p++;
        } else {
            ans += v[i] - 1;
            p = v[i];
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