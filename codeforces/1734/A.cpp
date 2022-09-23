#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());

    ll min = 1e11;
    for (int i = 0; i < n - 2; i++) {
        min = std::min(1LL * ((v[i + 1] - v[i]) + (v[i + 2] - v[i + 1])), min);
    }
    std::cout << min << '\n';
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