#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, x, y;
    std::cin >> n >> x >> y;
    n--;

    if (x < y) std::swap(x, y);
    if (!(x || y) || (x && y) || n % x) {
        std::cout << "-1\n";
        return;
    }

    for (int i = 1; i <= n; i += x) {
        for (int j = 0; j < x; j++) {
            std::cout << i + 1 << ' ';
        }
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
