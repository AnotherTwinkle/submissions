#include <bits/stdc++.h>

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::string s(m, 'B');
    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;

        if (s[x - 1] == 'A') s[m - x] = 'A';
        else if (s[m - x] == 'A') s[x - 1] = 'A';
        else s[std::min(m - x, x - 1)] = 'A';
    }
    std::cout << s << '\n';

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