#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        int n = 1;
        int c = 0;
        std::vector<bool> a(26, 0);
        for (int i = 0; i < s.length(); i++) {
            if (!(a[s[i] - 'a'])) {
                c++;
                a[s[i] - 'a'] = 1;
            }

            // std::cout << c << "\n";

            if (c > 3) {
                c = 0;
                i--;
                for (int i = 0; i < 26; i++) a[i] = 0;
                n++;
            }

        }

        std::cout << n << "\n";
    }
}