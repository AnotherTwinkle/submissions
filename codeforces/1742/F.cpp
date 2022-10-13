#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int q;
    std::cin >> q;

    ll sa = 1, ta = 1;
    bool sx = 0, tx = 0;

    while (q--) {
        int x, w; std::string s;
        std::cin >> x >> w >> s;
        int i = std::count(s.begin(), s.end(), 'a');
        if (x == 1) {
            sa += 1LL * i * w;
            sx |= (s.size() - i) > 0;
        } else {
            ta += 1LL * i * w;
            tx |= (s.size() - i) > 0;
        }
        if (sx && !tx) std::cout << "NO\n";
        else if (!(sx || tx)) {
            std::cout << (sa < ta ? "YES\n" : "NO\n");
        } else {
            std::cout << "YES\n";
        }
    }
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