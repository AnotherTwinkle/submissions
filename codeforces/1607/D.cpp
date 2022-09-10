#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    for (int& i : v) {
        std::cin >> i;
    }

    std::vector<int> b, r;
    std::string s; std::cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') r.push_back(v[i]);
        else b.push_back(v[i]);
    }
    std::sort(b.begin(), b.end());
    std::sort(r.begin(), r.end());

    for (int i = 0; i < b.size(); i++) {
        if (b[i] < i + 1) {
            std::cout << "NO\n";
            return;
        }
    }

    for (int i = 0; i < r.size(); i++) {
        if (r[i] > (i + (int)b.size() + 1)) {
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