#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n + 1);
    v[1] = n, v[2] = n - 1;
    for (int i = 3; i <= n; i++) {
        v[i] = i - 2;
    }

    for (int i = 1; i <= n; i++) {
        if (v[i] == i) {
            std::cout << "-1\n";
            return;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        std::cout << v[i] << " \n"[i == n];
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