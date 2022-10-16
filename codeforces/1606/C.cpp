#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

int pre[10];

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    k++;
    ll ans = 0;
    for (int i = 0; i < n && k; i++) {
        int x = (i == n - 1 ? k : std::min(k, pre[v[i + 1]] / pre[v[i]] - 1));
        k -= x;
        ans += 1LL * pre[v[i]] * x;
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    pre[0] = 1;
    for (int i = 1; i < 10; i++) {
        pre[i] = pre[i - 1] * 10;
    }

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}