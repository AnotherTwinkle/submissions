#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::vector<bool> t(n, 1);
    for (int i = 1; i < n; i++) {
        t[i] = (v[i] << 1) > v[i - 1];
    }

    int tmp = 0, l = 1, r = k;
    for (int i = l; i <= r; i++) {
        tmp += t[i];
    }

    int ans = (tmp == k);
    for (; r < n - 1; l++, r++) {
        tmp -= t[l], tmp += t[r + 1];
        ans += tmp == k;
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