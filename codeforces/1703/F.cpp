#include <bits/stdc++.h>
using ll = long long;
#define arr std::array<int, 2>

void solve() {
    int n;
    std::cin >> n;
    std::vector<arr> v;
    std::vector<int> psum(n);
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x; x--;
        if (x < i) v.push_back({x, i});
    }

    int s = v.size();
    for (int i = 0; i < s; i++) {
        int r = i < s - 1 ? v[i + 1][1] : n;
        for (int j = v[i][1]; j < r; j++) {
            psum[j] = i + 1;
        }
    }

    ll ans = 0;
    for (int i = 0; i < s; i++) {
        if (v[i][0] >= 1) ans += psum[v[i][0] - 1];
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