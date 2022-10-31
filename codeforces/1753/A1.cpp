#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    if (n % 2) {
        std::cout << "-1\n";
        return;
    }

    std::vector<pair> ans;
    for (int i = 0; i < n; i += 2) {
        if (i != n - 1 && v[i] == v[i + 1]) {
            ans.push_back({i + 1, i + 2});
        } else {
            ans.push_back({i + 1, i + 1});
            ans.push_back({i + 2, i + 2});
        }
    }

    std::cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i][0] << ' ' << ans[i][1] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
}