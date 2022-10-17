#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    ll n, a, e;
    std::cin >> n >> a >> e;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int p = e % 2;
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] % 2 == 1) p = !p;
    }

    if (p == a % 2) {
        std::cout << "Alice\n";
    } else {
        std::cout << "Bob\n";
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