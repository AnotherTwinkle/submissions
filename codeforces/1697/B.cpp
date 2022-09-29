#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end(), std::greater<int>());

    std::vector<ll> psum(n + 1);
    for (int i = 0; i < n; i++) {
        psum[i + 1] = psum[i] + v[i];
    }

    while (q--) {
        int a, b;
        std::cin >> a >> b;
        std::cout << psum[a] - psum[a - b] << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // std::cin >> t;
    while (t--) {
        solve();
    }
}