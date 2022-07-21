#include <bits/stdc++.h>
#define send {std::ios::sync_with_stdio(false);}
#define help {std::cin.tie(nullptr);}

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) std::cin >> v[i];

    // We need two prefix sums
    std::vector<long long> psumf(n), psumb(n);
    for (int i = 1; i < n; i++) {
        long long diff = std::max(0, v[i-1] - v[i]);
        psumf[i] = psumf[i - 1] + diff;
    }

    for (int i = n - 2; i >= 0; i--) {
        long long diff = std::max(0, v[i + 1] - v[i]);
        psumb[i] = psumb[i + 1] + diff;
    }

    while (q--) {
        int l, r;
        std::cin >> l >> r;
        l--; r--;

        if (l < r) {
            std::cout << psumf[r] - psumf[l] << "\n";
        }
        else {
            std::cout << psumb[r] - psumb[l] << "\n";
        }
    }
}

int main() {
    send help
    solve();
}

