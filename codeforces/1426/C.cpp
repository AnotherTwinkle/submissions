#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        double n;
        std::cin >> n;

        double f = std::sqrt(n);
        std::cout << std::nearbyint(f) + std::ceil(f) - 2 << "\n";
    }
}

