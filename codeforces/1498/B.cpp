#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int s, n;
    std::cin >> s >> n;
    std::vector<int> v(33, 0);
    for (int i = 0; i < s; i++) {
        int x; std::cin >> x;
        v[__builtin_ctz(x)]++;
    }

    int ans = 0;
    while (s > 0) {
        int pntr = 32;
        for (int i = n; ;) {
            while (pntr && (i < (1 << pntr) || !v[pntr])) pntr--;
            while (i >= (1 << pntr) && v[pntr]) {
                v[pntr]--, i -= (1 << pntr), s--;
            }
            if ((!pntr && !v[pntr]) || !i) break;
        }
        ans++;
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