#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int d;
        std::cin >> d;
        int v = 1;
        v += (d <= 1899) + (d <= 1599) + (d <= 1399);
        std::cout << "Division " << v << "\n";
    }
}