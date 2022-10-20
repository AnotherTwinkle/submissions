#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> v(n + 1);
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        v[x].push_back(i);
    }

    std::vector<int> ans;
    int l = 0;
    while (l < n) {
        int r = l + 1, x = 0;
        while (1) {
            auto it = std::lower_bound(v[x].begin(), v[x].end(), l);
            if (it == v[x].end()) break;

            r = std::max(r, *it + 1);
            x++;
        }

        l = r;
        ans.push_back(x);
    }

    std::cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == (int)ans.size() - 1];
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