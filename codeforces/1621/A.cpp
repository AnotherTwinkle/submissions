#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        if (std::ceil((double)n / 2) < k) {
            std::cout << "-1\n";
            continue;
        }

        for (int i = 0; i < n; i++) {
            if (i % 2) std::cout << std::string(n, '.');
            else {
                for (int j = 0; j < n; j++) {
                    std::cout << ".R"[(i == j) && k > 0];
                }
                k--;
            }
            std::cout << "\n";
        }
    }
}