#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<ll> sum(2), count(2);
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        sum[x % 2] += x;
        count[x % 2]++;
    }

    while (q--) {
        int x, j;
        std::cin >> x >> j;

        if (j % 2) {
            sum[!x] += sum[x] + count[x] * j;
            count[!x] += count[x];
            count[x] = sum[x] = 0;
        } else {
            sum[x] += count[x] * j;
        }
        
        std::cout << sum[0] + sum[1] << '\n';
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