#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n), vis(n);

    for (int& i : v) std::cin >> i;
    std::sort(v.begin(), v.end(), std::greater<int>());

    bool flag = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) flag = 1;
    }

    if (!flag) {
        std::cout << "NO\n";
        return;
    }

    std::cout << "YES\n";
    for (int i = 0; i < n; i++) {
        if (!i || v[i] != v[i - 1]) {
            std::cout << v[i] << " ";
            vis[i] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (!vis[i]) std::cout << v[i] << " ";
    }
    std::cout << "\n";
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