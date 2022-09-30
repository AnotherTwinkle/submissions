#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<ll> v(k);
    for (int i = 0; i < k; i++) {
        std::cin >> v[i];
    }
    if (k == 1) {
        std::cout << "YES\n";
        return;
    }
    std::reverse(v.begin(), v.end());
    std::vector<ll> ans(n);
    for (int i = 0; i < k - 1; i++) {
        ans[i] = v[i] - v[i + 1];
    }

    ans[k - 1] = v[k - 1];
    ll d = n - k;
    while (d--) {
        ans[k - 1] -= ans[k - 2];
    }

    if (std::is_sorted(ans.begin(), ans.begin() + k, std::greater<ll>())) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
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