#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::string s;
    std::cin >> n >> k >> s;

    int ans = 0;
    std::vector<bool> v(n);
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') {
            v[i] = 1;
            ans++;
        }
    }

    while (k--) {
        int i; char x;
        std::cin >> i >> x;
        i--;

        if (s[i] == x) {
            std::cout << ans << '\n';
            continue;
        }

        s[i] = x;
        if (x == 'a') {
            if (i < n - 2 && s[i + 1] == 'b' && s[i + 2] == 'c') ans++, v[i] = 1;
            if (i && v[i - 1]) ans--, v[i - 1] = 0;
            if (i > 1 && v[i - 2]) ans--, v[i - 2] = 0;
        }

        if (x == 'b') {
            if (i && i < n - 1 && s[i - 1] == 'a' && s[i + 1] == 'c') ans++, v[i - 1] = 1;
            if (v[i]) ans--, v[i] = 0;
            if (i > 1 && v[i - 2]) ans--, v[i - 2] = 0;
        }

        if (x == 'c') {
            if (i > 1 && s[i - 2] == 'a' && s[i - 1] == 'b') ans++, v[i - 2] = 1;
            if (v[i]) ans--, v[i] = 0;
            if (i && v[i - 1]) ans--, v[i - 1] = 0;
        }

        std::cout << ans << '\n';
    }
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