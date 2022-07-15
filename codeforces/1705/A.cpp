#include <bits/stdc++.h>

void solve() {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> v(2*n);
    for (int i = 0; i < 2 * n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (v[i + n] - v[i] < x) {
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