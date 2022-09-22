#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<bool> b(n + 1);
    std::vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        if (x <= n && !b[x]) {
            b[x] = 1;
            continue;
        }
        v.push_back(x);
    }
    std::sort(v.begin(), v.end());

    auto it = v.end() - 1;
    int ans = 0;
    for (int i = n; i > 0; i--) {
        if (b[i]) continue;
        if (i * 2 >= *it) {
            std::cout << "-1\n";
            return;
        }
        ans++, it--;
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