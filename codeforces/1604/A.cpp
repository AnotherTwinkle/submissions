#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            ans = std::max(ans, x - (i + 1));
        }

        std::cout << ans << "\n";
    }
}