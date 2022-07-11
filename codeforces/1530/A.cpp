#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        char m = '1';
        for (char& i : s) m = std::max(i, m);
        std::cout << m << "\n";
    }
}