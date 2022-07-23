#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n, k, x;
    std::cin >> n >> k >> x;

    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());

    std::vector<ll> diff(n - 1);
    for (int i = 0; i < n - 1; i++) {
        diff[i] = v[i+1] - v[i];
    }
    std::sort(diff.begin(), diff.end());
     // I guess it's optimal to fill up the shortest gap first

    ll ans = 1;
    for (int i = 0; i < n - 1; i++) {
        if (diff[i] >= x) {
            ll f = ((diff[i] + x - 1)/ x) - 1;
            if (f <= k) k -= f;
            else ans++;
        }
    }

    std::cout << ans << "\n";
}

#define send {std::ios::sync_with_stdio(false);}
#define help {std::cin.tie(nullptr);}
int main() {
    send help

    solve();
}

