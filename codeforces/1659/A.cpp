#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, r, b;
    std::cin >> n >> r >> b;

    int e = r % (b + 1);
    for (int i = 0; i <= b; i++) {
        std::cout << std::string(r/(b + 1) + (i < e), 'R') << "B\n"[i == b];
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