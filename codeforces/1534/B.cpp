#include <bits/stdc++.h>
#define send {std::ios::sync_with_stdio(false);}
#define help {std::cin.tie(nullptr);}

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n + 2, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i + 1];
    }

    long long ans = 0;
    for (int i = 0; i <= n; i++) {
        ans += std::abs(v[i] - v[i + 1]);
    }

    for (int i = 1; i < n + 1; i++) {
        if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
            ans -= (v[i] - std::max(v[i+1], v[i-1])); 
        }
    }
    std::cout << ans << "\n";
}

int main() {
    send help

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

