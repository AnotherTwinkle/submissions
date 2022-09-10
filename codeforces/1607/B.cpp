#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll x, n;
    std::cin >> x >> n;
    
    // fwiw I'm never using switch statements again.
    ll d = 0;
    switch(n % 4) {
        case 1:
            d = -n; break;
        case 2:
            d = 1; break;
        case 3:
            d = (n + 1); break;
    }

    std::cout << x + (x % 2 ? -d : d) << '\n';
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