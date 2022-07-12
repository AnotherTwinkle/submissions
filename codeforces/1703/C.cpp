#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;

        for (int j = 0; j < x; j++) {
            char c;
            std::cin >> c;
            v[i] += (c == 'D' ? 1 : -1);
        }
        if (v[i] > 9) v[i] -= 10;
        if (v[i] < 0) v[i] += 10;
    }

    for(int i : v) {
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