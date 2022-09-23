#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        if (i) std::cout << "1 ";
        for (int j = 0; j < i - 1; j++) {
            std::cout << "0 ";
        }
        std::cout << "1\n";
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