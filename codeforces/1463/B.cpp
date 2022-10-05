#include <bits/stdc++.h>
using ll = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::vector<ll> v(n), ans(n);
        for (int i = 0; i < n; i++) {
            std::cin >> v[i];
        }

        ans[0] = v[0];
        for (int i = 1; i < n; i++) {
            if (v[i] >= ans[i - 1]) {
                ll k = v[i] / ans[i - 1], m = v[i] % ans[i - 1];
                ll a = ans[i - 1] * (k + (m > (ans[i - 1] - m)));
                while (a > 1e9) a -= ans[i - 1];
                ans[i] = a;
            } else {
                ans[i] = 1;
            }
        }

        for (int i = 0; i < n; i++) {
            std::cout << ans[i] << " \n"[i == n - 1];
        }
    }
}