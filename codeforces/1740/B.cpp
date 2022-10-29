#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;

    int max = -1;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;

        if (a > b) std::swap(a, b);
        v[i] = a;
        max = std::max(max, b);
    }

    std::cout << (std::accumulate(v.begin(), v.end(), 0LL) + max) * 2 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
}