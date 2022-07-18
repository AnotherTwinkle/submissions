#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> l(n, -1), ans(n);

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        x--;

        if (l[x] < 0 || (i - (l[x] + 1)) % 2 == 0) {
            ans[x]++;
            l[x] = i;
        }
    }

    for (int i : ans) {
        std::cout << i << " ";
    }

    std::cout << "\n";
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