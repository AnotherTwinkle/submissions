#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;

    while (t--) {
        int n, q;
        std::cin >> n >> q;
        std::map<int, std::vector<int>> m;

        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            m[x].push_back(i);
        }

        while (q--) {
            int l, r;
            std::cin >> l >> r;

            if (m[l].size() && m[r].size()) {
                std::cout << (m[l][0] < m[r].back() ? "YES\n": "NO\n");
            } else {
                std::cout << "NO\n";
            }
        }
    }
}