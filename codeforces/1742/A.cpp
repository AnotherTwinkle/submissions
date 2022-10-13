#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b == c || a + c == b || b + c == a) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
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