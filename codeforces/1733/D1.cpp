#include <bits/stdc++.h>
using ull = unsigned long long;

void solve(int t) {
    int n, x, y;
    std::cin >> n >> x >> y;
    std::string a, b;
    std::cin >> a >> b;

    std::vector<int> v;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            v.push_back(i);
        }
    }

    ull s = v.size();
    if (v.empty()) {
        std::cout << "0\n";
        return;
    }

    if (s % 2) {
        std::cout << "-1\n";
        return;
    }

    ull preans = (s == 2 && v[1] == v[0] + 1) ? 1e18 : y * s / 2;
    ull ans = 0;
    for (int i = 0; i < s - 1; i += 2) {
        if (v[i + 1] == v[i] + 1) {
            ans += std::min(y * 2, x);
        } else {
            ans += std::min(y, x * 2);
        }
    }
    std::cout << std::min(preans, ans) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t; std::cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
    std::cin >> t;
    while (t--) {
        // solve();
    }
}
