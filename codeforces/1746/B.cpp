#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    int o = 0;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
        o += v[i]; 
    }

    std::cout << std::count(v.rbegin(), v.rbegin() + o, 0) << '\n';
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