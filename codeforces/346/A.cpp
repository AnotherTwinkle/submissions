#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    int max = 0, gcd = 0;
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        max = std::max(x, max);
        gcd = std::__gcd(gcd, x);
    }

    std::cout << ((max / gcd - n) % 2 ? "Alice\n" : "Bob\n");
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