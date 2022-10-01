#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::array<int, 7> v;
    for (int i = 0; i < 7; i++) {
        std::cin >> v[i];
    }

    std::cout << v[0] << ' ' << v[1] << ' ' << v[6] - (v[0] + v[1]) << '\n';
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