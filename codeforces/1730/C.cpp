#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s;

    int n = s.size();
    std::vector<int> v(n);
    std::vector<std::vector<int>> pos(10);
    for (int i = 0; i < n; i++) {
        v[i] = s[i] - '0';
        pos[v[i]].push_back(i);
    }

    int valid = -1;
    for (int i = 0; i < 10; i++) {
        for (auto j : pos[i]) {
            if (j > valid) {
                valid = j;
            } else {
                v[j] = std::min(v[j] + 1, 9);
            }
        }
    }

    std::sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        std::cout << v[i];
    } std::cout << "\n";
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