#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n; std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int f = n;
    for (int i = 0; i < n; i++) {
        while (v[i] % 2 == 0) {
            v[i] /= 2;
            f--;
        }
    }

    std::vector<int> p(n);
    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x % 2 == 0) {
            x /= 2;
            p[i - 1]++;
        }
    }

    std::sort(p.begin(), p.end(), std::greater<int>());
    int ans = 0;
    for (int i = 0; i < n && f > 0; i++) {
        f -= p[i];
        ans++;
    }
    
    if (f > 0) {
        std::cout << "-1\n";
        return;
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