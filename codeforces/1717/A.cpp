#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    int x = n / 3;
    int y = (n / 2 - x);
    int z = n - (x + y);
    std::cout << x * 5 + y * 3 + z * 1 << '\n';
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