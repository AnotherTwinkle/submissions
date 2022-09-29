#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;

    if (std::min(n, m) == 1) {
        std::cout << n << ' ' << m << '\n';
    }
    else {
        std::cout << 2 << ' ' << 2 << '\n';
    }
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