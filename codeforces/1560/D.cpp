#include <bits/stdc++.h>
using ll = long long;

ll pre[60];
void solve() {
    std::string s;
    std::cin >> s;
    int n = s.size();

    int min = 1e9;
    for (int i = 0; i < 60; i++) {
        std::string x = std::to_string(pre[i]);
        int z = x.size();

        int res = 0;
        auto it = x.begin();
        for (int j = 0; j < n && it != x.end(); j++) {
            if (s[j] == *it) {
                res++, it++;
            }
        }

        min = std::min(z - res + n - res, min);
    }

    std::cout << min << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    pre[0] = 1;
    for (int i = 1; i < 60; i++) {
        pre[i] = pre[i - 1] * 2;
    }

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}