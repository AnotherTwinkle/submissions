#include <bits/stdc++.h>
using ll = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, q;
    std::cin >> n >> q;
    std::map<int, int> m;

    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        std::cin >> m[i];
        sum += m[i];
    }

    int d = 0;
    while (q--) {
        int t, x;
        std::cin >> t;

        if (t == 1) {
            int i; std::cin >> i >> x;
            sum += x - (m[i] ? m[i] : d);
            m[i] = x;
        } else {
            std::cin >> x;
            d = x;
            m.clear();
            sum = 1LL * x * n;
        }

        std::cout << sum << '\n';
    }
}