#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n), s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
        s[i] = v[i];
    }
    std::sort(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        if (v[i] != s[i] && v[i] % s[0]) {
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