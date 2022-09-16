#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    if (n == 1) {
        std::cout << "-1\n";
        return;
    }

    std::vector<int> ans(n);
    std::iota(ans.begin(), ans.end(), 1);

    for (int i = 0; i < n - 1; i++) {
        if (ans[i] == v[i]) {
            std::swap(ans[i], ans[i + 1]);
        }
    }

    if (v.back() == ans.back()) std::swap(ans[n - 1], ans[n - 2]);
    for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " \n"[i == n - 1];
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