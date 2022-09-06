#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    int min = 0, max = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
        if (v[i] < v[min]) min = i;
        if (v[i] > v[max]) max = i;
    }

    if (max == n - 1 || min == 0) {
        std::cout << v[max] - v[min] << '\n';
        return;
    }

    int ans = v[n - 1] - v[0];
    for (int i = 0; i < n; i++) {
        int x = i ? v[i - 1] : v[n - 1];
        ans = std::max(x - v[i], ans);
    }
    std::cout << std::max({ans, v[max] - v[0], v[n - 1] - v[min]}) << '\n';
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