#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    int n = s.length(), ans = 0, l = 0;
    std::map<char, int> map;
    for (int i = 0; i < n; i++) {
        if (map[s[i]]) {
            ans += (i - l - 1);
            map.clear();
            l = i + 1;
        } else {
            map[s[i]] = i + 1;
        }
    }

    std::cout << ans + n - l << '\n';
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