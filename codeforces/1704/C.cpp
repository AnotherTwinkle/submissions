#include <bits/stdc++.h>
using ll = long long;
#define arr std::array<int, 2>

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(k), diff(k);
    for (int i = 0; i < k; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());

    for (int i = 1; i < k; i++) {
        diff[i - 1] = std::abs(v[i] - v[i - 1] - 1);
    }
    diff[k - 1] = n - v[k - 1] + v[0] - 1;

    std::sort(diff.begin(), diff.end(), std::greater<int>());
    ll off = 0, ans = 0;
    for (int i = 0; i < k; i++) {
        ll x = diff[i] - off;
        if (x != 1) x--;

        if (x <= 0) {
            break;
        }
        ans += x;
        off += 4;
    }

    std::cout << n - ans << '\n';
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