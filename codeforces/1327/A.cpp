#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;

        if (a % 2 != b % 2 || std::floor(std::sqrt(a)) < b) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }
}