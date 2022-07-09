#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> a(n);
        for (int i = 0; i < n; i++) std::cin >> a[i];
        std::sort(a.begin(), a.end());

        std::vector<std::pair<int, int>> v;
        v.push_back({a[0], 1});

        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                v.push_back({a[i], 1});
            } else {
                int x = v.back().second;
                v.back().second = std::min(x + 1, k);
            }
        }

        std::vector<int> f;
        for (int i = 0; i < v.size(); i++) {
            if (v[i].second == k) {
                f.push_back(v[i].first);
            }
        }

        if (f.size() < 1) {
            std::cout << "-1\n";
            continue;
        }

        // for (int i : f) std::cout << i << " ";
        // std::cout << "\n";

        int max = 1, s = 1, l = 0;
        for (int i = 1; i < f.size(); i++) {
            if (f[i] == f[i-1] + 1) s++;
            else s = 1;

            if (s > max) {
                max = s;
                l = f[i];
            }
        }

        if (l) std::cout << l - max + 1 << " " << l << "\n";
        else std::cout << f[0] << " " << f[0] << " ";
    }
}