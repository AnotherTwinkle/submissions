#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string a, b;
    std::cin >> a >> b;

    if (a.back() != b.back()) {
        if (a.back() > b.back()) {
            std::cout << "<";
        } else {
            std::cout << ">";
        }
        std::cout << '\n';
        return;
    }

    int ax = 0, bx = 0;
    for (char i : a) {
        if (i == 'X') ax++;
    }
    for (char i : b) {
        if (i == 'X') bx++;
    }

    if (ax > bx) {
        std::cout << "><"[a.back() == 'S'];
    } else if (ax < bx) {
        std::cout << "><"[a.back() != 'S'];
    } else {
        std::cout << "=";
    }
    std::cout << '\n';
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