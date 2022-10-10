#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n), b(n + 1);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        b[i] = std::lcm(v[i], v[i - 1]);
    }
    
    b[0] = v[0], b[n] = v[n - 1];
    for (int i = 0; i < n; i++) {
        if (std::__gcd(b[i], b[i + 1]) != v[i]) {
            std::cout << "No\n";
            return;
        }
    }

    std::cout << "Yes\n";
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