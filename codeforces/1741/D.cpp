#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    } 

    std::function<int(int, int)> minelem = [&](int l, int r) {return *std::min_element(v.begin() + l, v.begin() + r);};
    std::function<int(int, int)> maxelem = [&](int l, int r) {return *std::max_element(v.begin() + l, v.begin() + r);};

    int moves = 0;
    for (int i = 2; i <= n; i *= 2) {
        for (int j = 0; j < n; j += i) {
            int m = i / 2;
            int mxl = maxelem(j, j + m), mnl = minelem(j, j + m);
            int mxr = maxelem(j + m, j + i), mnr = minelem(j + m, j + i);
            if (mxl > mnr && mnl < mxr) {
                std::cout << "-1\n";
                return;
            }
            if (mxl > mxr) moves++;
        }
    }
    
    std::cout << moves << '\n';
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