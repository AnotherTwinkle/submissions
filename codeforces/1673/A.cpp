#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    int n = s.length();
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = s[i] - 'a' + 1;
    }

    if (n == 1) {
        std::cout << "Bob " << v[0] << '\n';
    } else {
        std::cout << "Alice ";
        std::cout << (std::accumulate(v.begin() + (n % 2), v.end() - (n % 2), 0LL) + std::max(v[0], v[n - 1]) * (n % 2) - std::min(v[0], v[n - 1]) * (n % 2)) << '\n';
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