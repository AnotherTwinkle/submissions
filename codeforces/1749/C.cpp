#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

bool simulate(std::vector<int> v, int k) {
    for (int i = 1; i <= k; i++) {
        bool flag = 0;
        std::sort(v.begin(), v.end());

        for (auto it = v.end() - 1; it != v.begin() - 1; it--) {
            if (*it <= k - i + 1) {
                v.erase(it);
                flag = 1;
                break;
            }
        }

        if (!flag) return false;
        if (!v.empty()) {
            v[0] += k - i + 1;
        }
    }

    return true;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int k = 100; k >= 0; k--) {
        std::vector<int> t(v.begin(), v.end());
        if (simulate(t, k)) {
            std::cout << k << '\n';
            return;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}