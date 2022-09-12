#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int x = a - 1;
    int y = std::abs(b - c) + (c - 1);
    if (x < y) {
        std::cout << "1\n";
    } else if (x > y) {
        std::cout << "2\n";
    } else {
        std::cout << "3\n";
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