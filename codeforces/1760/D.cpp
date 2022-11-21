#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;
constexpr int N = 1e9 + 7;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }   

    bool flag = 0;
    // Find segments
    std::vector<pair> segs;
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (r < n - 1 && v[r + 1] == v[l]) r++;
        segs.push_back({l , r});
        i = r;
    }

    for (auto i : segs) {
        int left = i[0] ? v[i[0] - 1] : N;
        int right = i[1] != n - 1 ? v[i[1] + 1] : N;
        if (v[i[0]] < left && v[i[1]] < right) {
            if (flag) {
                std::cout << "NO\n";
                return;
            } else {
                flag = 1;
            }
        }
    }

    std::cout << (flag ? "YES\n" : "NO\n");
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