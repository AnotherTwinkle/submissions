#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> v(n), ps(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    ps[0] = v[0];
    for (int i = 1; i < n; i++) {
        ps[i] = ps[i - 1] + v[i];
    }
    
    ll ans = n;
    for (int i = 0; i < n; i++) {
        if (ps[n - 1] % ps[i]) continue;

        ll max = i + 1, th = 0, req = 2, flag = 0;
        for (int j = i + 1; j < n; j++) {
            th++;
            if (ps[j] % ps[i] == 0) {
                if (ps[j] / ps[i] != req) {flag = 0; continue;}
                // std::cout << i << ' ' << th << ' ';
                flag = 1;
                max = std::max(th, max);
                th = 0, req++;
            }
        }
        if (flag) ans = std::min(ans, max);
    }

    std::cout << ans << '\n';
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