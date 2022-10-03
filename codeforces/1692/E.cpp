#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<bool> v(n);
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        v[i] = x;
    }

    int l = 0, r = 0, sum = v[r];
    while (r < n - 1 && (sum != k || !v[r + 1])) {
        r++;
        sum += v[r];
    }

    if (sum != k) {
        std::cout << "-1\n";
        return;
    }

    int max = (r - l) + 1;
    while (r < n - 1) {
        l++, r++;
        sum -= v[l - 1], sum += v[r];

        if (v[l - 1] && v[r]) {
            // do nothing
        } 
        else if (v[l - 1]) {
            while (r < n - 1 && sum != k) r++, sum += v[r];
            if (sum != k) break;
        } 
        else if (v[r]) {
            while (l < r && sum != k) sum -= v[l], l++;
        }

        while (r < n - 1 && !v[r + 1]) r++;
        max = std::max(max, (r - l) + 1);
    }

    std::cout << n - max << "\n";
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