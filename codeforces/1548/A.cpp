#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> f(n), w(n);
    for (int i = 0, u, v; i < m; i++) {
        std::cin >> u >> v; u--, v--;
        f[u]++, f[v]++;
        int x = std::max(u, v); 
        w[x]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (f[i] == w[i]) ans++;
    }

    int q;
    std::cin >> q;
    while (q--) {
        int x; std::cin >> x;
        if (x == 3) {
            std::cout << ans << '\n';
        } else {
            int u, v; std::cin >> u >> v; u--, v--;
            if (u < v) std::swap(u, v);
            if (x == 1) {
                if (w[v] == f[v]) ans--;
                w[u]++, f[u]++, f[v]++;
            } else {
                if (w[v] == f[v] - 1) ans++;
                w[u]--, f[u]--, f[v]--;
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // std::cin >> t;
    while (t--) {
        solve();
    }
}