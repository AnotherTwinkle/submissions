#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    std::vector<int> v(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    std::cout << v[1] << '\n';
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