#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int ans = 0, min = 1e9;
    for (int i = 0; i < n; i++) {
        if (!i) {
            while (i < n && s[i] == '1') ans += v[i], i++;
        }
        if (s[i] == '0') {
            min = v[i]; ans += min; i++;
            while (i < n && s[i] == '1') {
                min = std::min(min, v[i]);
                ans += v[i];
                i++;
            }
            ans -= min, i--;
            min = 1e9;
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