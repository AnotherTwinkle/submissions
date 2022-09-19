#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    if (std::is_sorted(v.begin(), v.end())) {
        std::cout << "0\n";
        return;
    }

    int tot = 1;
    std::vector<std::array<int, 2>> ans;
    ans.push_back({1, n});
    for (int i = 1; i < n - 1; i++) {
        if (v[i] % 2 == v[0] % 2) {
            ans.push_back({i + 1, n});
        } else {
            ans.push_back({1, i + 1});
        }
        tot++;
    }

    std::cout << tot << '\n';
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i][0] << " " << ans[i][1] << '\n';
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
