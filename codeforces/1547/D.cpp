#include <bits/stdc++.h>
using ll = long long;

// Todo: Solve without bitsets.
void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n), ans(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        std::bitset<30> x(v[i - 1] ^ ans[i - 1]), y(v[i]);
        std::bitset<30> s;
        for (int i = 0; i < 30; i++) {
            if (x[i] && !y[i]) {
                s[i] = 1;
            }
        }
        ans[i] = (int)s.to_ulong();
    }

    for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
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