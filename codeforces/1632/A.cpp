#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::string s;
        std::cin >> n >> s;

        if (n > 2 || (n == 2 && s[0] == s[1])) {
            std::cout << "NO\n";
            continue;
        }

        std::cout << "YES\n";
    }
}