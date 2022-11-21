#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;

    int max = 0;
    for (int i = 0; i < n; i++) {
        char x; std::cin >> x;
        max = std::max(max, x - 'a' + 1);
    }

    std::cout << max << '\n';
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