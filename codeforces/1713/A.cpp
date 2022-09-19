#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    int xmax = 0, xmin = 0, ymin = 0, ymax = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        xmax = std::max(x, xmax);
        xmin = std::min(x, xmin);
        ymin = std::min(y, ymin);
        ymax = std::max(y, ymax);
    }

    std::cout << 2 * (xmax - xmin + ymax - ymin) << '\n';
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