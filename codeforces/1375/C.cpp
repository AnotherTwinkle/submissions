#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int i = 1; i < n - 1; i++) {
        if (v[i - 1] < v[i]) v[i] = v[i - 1];
    }

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[n - 1]) {
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