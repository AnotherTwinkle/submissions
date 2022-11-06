#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    ll o = 0, z = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') o++; else z++;
    }

    ll maxo = 0, cnto = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cnto++;
            maxo = std::max(cnto, maxo);
        } else {
            cnto = 0;
        }
    }

    ll maxz = 0, cntz = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            cntz++;
            maxz = std::max(cntz, maxz);
        } else {
            cntz = 0;
        }
    }

    std::cout << std::max({o * z, maxz * maxz, maxo * maxo}) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
}
