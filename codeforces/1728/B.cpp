#include <bits/stdc++.h>
using ll = long long;

// We want to make sure that the the n-2th element yields 0.
void solve() {
    int n;
    std::cin >> n;

    if (n % 2) {
        std::cout << "1 ";
        for (int i = n - 2; i >= 2; i--) {
            std::cout << i << ' ';
        }
        std::cout << n - 1 << ' ' << n << '\n';
    } else {
        for (int i = n - 2; i > 0; i--) {
            std::cout << i << ' ';
        }
        std::cout << n - 1 << ' ' << n << '\n';
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