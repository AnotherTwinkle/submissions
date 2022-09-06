#pragma GCC optimize("Ofast,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;

    if (k < n) {
        std::cout << "No\n";
        return;
    }

    if (k % n == 0) {
        std::cout << "Yes\n";
        for (int i = 0; i < n; i++) {
            std::cout << k / n << " \n"[i == n - 1];
        }
        return;
    }

    if (n % 2) {
        std::cout << "Yes\n";
        std::cout << k - n + 1<< " ";
        for (int i = 1; i < n; i++) {
            std::cout << 1 << " \n"[i == n - 1];
        }
        return;
    }

    if ((k - n) % 2 == 0) {
        std::cout << "Yes\n";
        for (int i = 0; i < 2; i++) {
            std::cout << (1 + (k - n) / 2) << ' ';
        }
        if (!(k - n)) std::cout << '\n';
        for (int i = 2; i < n; i++) {
            std::cout << 1 << " \n"[i == n - 1];
        }
    }

    else {
        std::cout <<  "No\n";
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