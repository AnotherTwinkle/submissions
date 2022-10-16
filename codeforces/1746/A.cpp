#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;

    bool flag = 0;
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        flag |= x;
    }
    std::cout << (flag ? "YES\n" : "NO\n");
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