#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::reverse(v.begin(), v.end());

    int x = 0;
    for (; x < n - 1; x++) {
        if (v[x] != v[x + 1]) break;
    } x++;

    int ans = 0;
    for (int i = x; i < n; i *= 2) {
        for (int j = i; j < i * 2 && j < n; j++) {
            // std::cout << j << ' ';
            if (v[j] == v[0]) {
                i++;
            } else {
                ans++;
                break;
            }
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