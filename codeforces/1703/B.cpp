#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;

    int sum = 0;
    std::vector<bool> a(26, 0);
    for (int i = 0; i < n; i++) {
        char x;
        std::cin >> x;
        sum++;

        if (a[x - 'A'] == 0) {
            sum++;
            a[x - 'A'] = 1;
        }
    }

    std::cout << sum << "\n";
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