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
    std::string s;
    std::cin >> s;

    std::map<int, char> m;
    for (int i = 0; i < n; i++) {
        if (!m[v[i]]) {
            m[v[i]] = s[i];
            continue;
        }

        if (m[v[i]] != s[i]) {
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