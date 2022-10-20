#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n), b(n);

    for (ll& i : a) std::cin >> i;
    for (ll& i : b) std::cin >> i;

    ll ans = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        if (b[l] < b[r]) {
            ans += a[l]; 
            if (l < n - 1) a[l + 1] += b[l];
            l++;
        } else {
            ans += a[r];
            if (r) a[r - 1] += b[r];
            r--;
        }
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