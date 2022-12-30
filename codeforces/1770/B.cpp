#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n, k;
    std::cin >> n >> k;

    int j = 1, x = n;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            std::cout << j << ' ';
            j++;
        } else {
            std::cout << x << ' ';
            x--;
        }
    }
    std::cout << '\n';
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