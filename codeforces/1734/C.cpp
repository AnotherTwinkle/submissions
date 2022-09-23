#include <bits/stdc++.h>
using ll = long long;

void solve(int test) {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    ll ans = 0;
    std::vector<bool> v(n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n && s[j - 1] == '0'; j += i) {
            if (!v[j - 1]) {
                v[j - 1] = 1;
                ans += i;
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
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
}