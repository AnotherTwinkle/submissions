#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, r, x, y;
    std::cin >> n >> r >> y >> x;
    x--, y--; 
    int offxr = x % r, offyd = y % r;
    int offxl = r - offxr, offyu = r - offyd;
    std::vector<std::vector<int>> v(n + r, std::vector<int>(n + r));
    for (int i = 0; i < n + r; i++) {
        for (int j = 0; j < n + r; j++) {
            if ((j - (i % r)) % r == 0) {
                v[i][j] = 1;
            }
        }
    }

    for (int i = offyu; i < n + r - offyd; i++) {
        for (int j = offxl ; j < n + r - offxr; j++) {
            std::cout << (v[i][j] ? 'X' : '.');
        }
        std::cout << '\n';
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