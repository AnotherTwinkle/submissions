#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::string> v(n - 2);
    for (int i = 0; i < n - 2; i++) {
        std::cin >> v[i];
    }

    bool f = 0;
    for (int i = 0; i < n - 3; i++) {
        std::cout << v[i][0];
        if (v[i][1] != v[i + 1][0]) {
            std::cout << v[i][1];
            f = 1;
        }
    }

    std::cout << v[n - 3];
    if (!f) {
        std::cout << v[n - 3][1];
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