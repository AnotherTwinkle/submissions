#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n), m(n);

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        v[i] = m[i] = x;
    }

    std::sort(m.begin(), m.end(), std::greater<int>());
    int f = m[0], s = m[1];
    for (int i = 0; i < n; i++) {
        if (v[i] == f) {
            std::cout << v[i] - s << ' ';
        } else {
            std::cout << v[i] - f << ' ';
        }
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