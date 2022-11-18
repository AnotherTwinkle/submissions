#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;
#define NO {std::cout << "-1\n";return;}

/*
if r - l >= x Answer is just 1;

We use one move to get to r.
Now, if (r - a) - b >= x then answer is 2.
*/
void solve() {
    int l, r, x, a, b;
    std::cin >> l >> r >> x >> a >> b;
    if (a > b) std::swap(a, b);

    if (b - a == 0) {
        std::cout << "0\n";
        return;
    }

    if (b - a >= x) {
        std::cout << "1\n";
        return;
    }
    if (r - a < x && a - l < x) NO;
    if (r - a >= x && r - b >= x || a - l >= x && b - l >= x) {
        std::cout << "2\n";
        return;
    }

    if (r - l < x || (r - b < x && b - l < x)) NO;
    std::cout << "3\n";

}


int main() {
    std::ios::sync_with_stdio (false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}