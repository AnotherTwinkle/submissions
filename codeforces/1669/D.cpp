#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::string s;
    std::cin >> n >> s;
    int r = 0, b = 0;
    for (int i = 0; i < n; i++) {
        r += (s[i] == 'R'), b += (s[i] == 'B');
        if ((s[i] == 'W' || i == n - 1)) {
            if ((r || b) && !(r && b)) {
                std::cout << "NO\n";
                return;   
            } else {
                r = 0, b = 0;
            }
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