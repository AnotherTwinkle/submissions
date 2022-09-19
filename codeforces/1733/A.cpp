#include <bits/stdc++.h>
using ll = long long;


void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);
    for (int& i : v) {
        std::cin >> i;
    }

    ll sum = 0;
    for (int i = 0; i < k; i++) {
        int max = 0;
        for (int j = 0; j < n; j++) {
            if (j % k == i) {
                max = std::max(max, v[j]);
            }
        }

        sum += max;
    }

    std::cout << sum << '\n';
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


