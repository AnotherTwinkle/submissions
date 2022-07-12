#include <bits/stdc++.h>


void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());
    for (int i = 0; i < n - 2; i++) {
        if (v[i] == v[i + 1] && v[i + 1] == v[i + 2]) {
            std::cout << v[i] << "\n";
            return;
        }
    }

    std::cout << "-1\n";
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