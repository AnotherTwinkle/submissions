#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<bool> v(n);

    for (int i = 0; i < n; i++) {
        char x; std::cin >> x;
        v[i] = x - '0';
    }

    int m = k;
    std::vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        v[i] = v[i] != (k % 2);
        if (!v[i] && m) {
            v[i] = 1;
            ans[i]++;
            m--;
        }
    }

    ans[n - 1] += m;
    v[n - 1] = v[n - 1] != (m % 2);

    for (int i = 0; i < n; i++) {
        std::cout << v[i];
    } std::cout << '\n';

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