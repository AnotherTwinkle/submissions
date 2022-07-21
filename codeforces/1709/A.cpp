#include <bits/stdc++.h>
#define send {std::ios::sync_with_stdio(false);}
#define help {std::cin.tie(nullptr);}

void solve() {
    int n; // The key we have
    std::cin >> n;
    std::vector<int> v(3);
    for(int i = 0; i < 3; i++) {
        std::cin >> v[i];
    }

    for (int i = 0; i < 3; i++) {
         n = v[n - 1];
         if (!n && i < 2) {
            std::cout << "NO\n";
            return;
         }
    }
    std::cout << "YES\n";
}

int main() {
    send help

    int t;
    std::cin >> t;
    while (t--) solve();
}

