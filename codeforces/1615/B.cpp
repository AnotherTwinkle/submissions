#include <bits/stdc++.h>
using ll = long long;

int pre[21][200005];
void precompute() {
    for (int i = 20; i >= 0; i--) {
        int res = 0;
        for (int j = 1; j <= 2e5; j++) {
            if ((j >> i) % 2 == 0) {
                res++;
            }
            pre[i][j] = res;
        }
    }
}

void solve() {
    int l, r;
    std::cin >> l >> r;

    int ans = 1e9;
    for (int i = 20; i >= 0; i--) {
        ans = std::min(ans, pre[i][r] - pre[i][l - 1]);
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    precompute();
    while (t--) {
        solve();
    }
}