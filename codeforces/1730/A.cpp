#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, c;
    std::cin >> n >> c;
    std::set<int> p;
    std::map<int, int> m;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        p.insert(x);
        m[x]++;
    }

    int ans = 0;
    for (auto& i : p) {
        if (m[i] > c) {
            ans += c;
        } else {
            ans += m[i];
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