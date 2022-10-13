#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> v(n);

    // ONE INDEXED
    std::map<int, int> m;
    for (int i = 1; i <= n; i++) {
        int x; std::cin >> x; v[i - 1] = x;
        if (!m[x]) m[x] = i;
    }

    std::vector<ll> psum(n); psum[0] = 1LL * v[0];
    for (int i = 1; i < n; i++) {
        psum[i] = psum[i - 1] + v[i];
    }
    
    std::vector<int> pmax(n); pmax[0] = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > pmax[i - 1]) pmax[i] = v[i];
        else pmax[i] = pmax[i - 1];
    }
    
    while (q--) {
        int x;
        std::cin >> x;

        if (x < psum[0]) {
            std::cout << "0 ";
            continue;
        }
        
        auto it = std::upper_bound(pmax.begin(), pmax.end(), x);
        if (it == pmax.end()) {
            std::cout << psum.back() << ' ';
            continue;
        }

        int s = it - pmax.begin(); s--;
        std::cout << psum[s] << ' ';
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