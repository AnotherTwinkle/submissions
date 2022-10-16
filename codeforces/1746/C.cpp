#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::vector<pair> diff(n - 1);
    for (int i = 0; i < n - 1; i++) {
        diff[i] = {v[i + 1] - v[i], i + 2};
    }

    std::sort(diff.begin(), diff.end(), [](pair a, pair b) {
        return a[0] > b[0];
    });

    std::cout << 1 << ' ';
    for (int i = 0; i < n - 1; i++) {
        std::cout << diff[i][1] << " \n"[i == n - 2];
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