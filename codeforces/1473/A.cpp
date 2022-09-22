#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, d;
    std::cin >> n >> d;
    
    bool flag = 0;
    std::vector<int> v(n);
    for (int& i : v) {
        std::cin >> i;
        if (i > d) flag = 1;
    }

    std::sort(v.begin(), v.end());
    if (v[0] + v[1] > d && flag) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
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