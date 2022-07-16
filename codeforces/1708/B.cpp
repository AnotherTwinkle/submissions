#include <bits/stdc++.h>

void solve() {
    int n, l, r;
    std::cin >> n >> l >> r;

    std::vector<int> ans(n);
    for (int i = 1; i <= n; i++) {
        if (l % i && l - (l % i) + i > r){
            std::cout << "NO\n";
            return;
        }

        ans[i - 1] = (l % i) ? (l - (l % i)) + i : l;
    }
    
    std::cout << "YES\n";
    for (int i : ans) {
        std::cout << i << " ";
    }

    std::cout << "\n";
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