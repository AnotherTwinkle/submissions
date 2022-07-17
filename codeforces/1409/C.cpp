#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n, x, y;
        std::cin >> n >> x >> y;

        int max = 0, k = 0;
        for (int i = 1; i <= y; i++) {
            if ((y - x) % i == 0) {
                int a = (y - x) / i - 1;
                if (a <= n - 2 && a > max) {
                    max = a;
                    k = i;
                }       
            }
        }

        if (!k) k = (y - x);

        std::vector<int> v;
        for (int i = y; i > 0 && v.size() < n; i -= k) v.push_back(i);
        std::reverse(v.begin(), v.end());
        for (int i = y + k; v.size() < n; i += k) v.push_back(i);

        for (int i : v) std::cout << i << " ";
        std::cout << "\n";
    }
}