#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;

        int x = std::max(a, b) - std::min(a, b);
        std::cout << x / 10 + (x % 10 > 0) << "\n";
    }
}