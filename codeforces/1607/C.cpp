#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int& i : v) {
        std::cin >> i;
    }
    std::sort(v.begin(), v.end());

    int prev = v[0], max = v[0];
    for (int i = 1; i < n; i++) {
        max = std::max(max, v[i] - prev);
        prev += v[i] - prev;
        
    }

    std::cout << max << '\n';
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