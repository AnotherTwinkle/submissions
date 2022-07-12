#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int i = 2; i < n; i++) {
        if (v[i] % 2 != v[i - 2] % 2) {
            std::cout << "NO\n";
            return;
        }
    }

    std::cout << "YES\n";
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