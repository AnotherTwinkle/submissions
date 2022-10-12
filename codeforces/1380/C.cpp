#include <bits/stdc++.h>
using ll = long long;
constexpr int N = 100000;

void solve() {
    int n, x;
    std::cin >> n >> x;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), std::greater<int>());

    int t = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] * (i + 1 - t) >= x) {
            ans++;
            t = i + 1;
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