#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        int x = std::log10(n);
        std::cout << n - (int)std::pow(10, x) << "\n";
    }
}