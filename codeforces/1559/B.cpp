#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int f = -1;
        std::vector<char> v(n);
        for (int i = 0; i < n; i++) {
            char x;
            std::cin >> x;

            v[i] = x;
            if (x != '?' && f < 0) f = i;
        }

        if (f < 0) v[0] = 'B';

        // Unleash two turtles =|:)
        for (int i = f - 1; i >= 0; i--) {
            v[i] = v[i+1] == 'R' ? 'B' : 'R';
        }

        for (int i = f + 1; i < n; i++) {
            if (v[i] == '?') v[i] = v[i - 1] == 'R' ? 'B' : 'R';
        }

        for (char i : v) std::cout << i;
        std::cout << "\n";
    }
}