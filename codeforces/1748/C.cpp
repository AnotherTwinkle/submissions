#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n), off(n);
    std::vector<ll> psum(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
        psum[i] = i ? psum[i - 1] + v[i] : v[i];
    }

    int ans = 0, max = 0;
    std::map<ll, int> t;
    for (int i = n - 1; i >= 0; i--) {
        t[psum[i]]++;
        max = std::max(max, t[psum[i]]);

        if (v[i] == 0) {
            ans += max;
            max = 0;
            t.clear();
        }
    }

    for (int i = 0; i < n; i++) {
        if (!v[i]) break;
        if (!psum[i]) ans++;
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