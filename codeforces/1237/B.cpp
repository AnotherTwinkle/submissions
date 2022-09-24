#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    std::map<int, bool> o;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    int ans = 0, check = 0;
    for (int i = 0; i < n; i++, check++) {
        while (o[a[check]]) {
            check++;
        }

        if (a[check] != b[i]) {
            o[b[i]] = 1;
            ans++;
            check--;
        }
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    // std::cin >> t;
    while (t--) {
        solve();
    }
}