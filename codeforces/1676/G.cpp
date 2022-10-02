#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n + 1), c(n + 1);
    std::vector<int> w(n + 1), b(n + 1);

    for (int i = 2; i < n + 1; i++) {
        std::cin >> v[i];
        c[v[i]]++;
    }

    for (int i = 1; i < n + 1; i++) {
        char x; std::cin >> x;
        w[i] += (x == 'W'), b[i] += (x == 'B');
    }

    std::function<void(int)> traverse = [&](int u) {
        if (u == 1) return;
        
        w[v[u]] += w[u], b[v[u]] += b[u];
        c[v[u]]--;
        if (!c[v[u]]) traverse(v[u]);
    };

    for (int i = 1; i < n + 1; i++) {
        if (!c[i]) traverse(i);
    }

    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (w[i] == b[i]) ans++;
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