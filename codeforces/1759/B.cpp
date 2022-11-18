#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {

    int n, m;
    std::cin >> n >> m;

    std::vector<bool> check(1001);
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        check[x] = 1;
    }

    for (int i = 1; i <= 1000; i++) {
        if (!check[i] && m >= i) {
            check[i] = 1;
            m -= i;
        }
    }
    for (int i = 2; i <= 1000; i++) {
        if (check[i] && !check[i - 1]) {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << (m == 0 ? "YES\n" : "NO\n");
}

int main() {
    std::ios::sync_with_stdio (false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}