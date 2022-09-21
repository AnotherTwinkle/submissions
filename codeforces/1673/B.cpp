#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;
    std::map<int, bool> m;

    int k;
    for (k = 0; k < s.size(); k++) {
        if (m[s[k] - 'a']) break;
        m[s[k] - 'a'] = 1;
    }

    for (int i = k; i < s.size(); i++) {
        if (s[i] != s[i - k]) {
            std::cout << "NO\n";
            return;
        }
    }

    std::cout << "YES\n";
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