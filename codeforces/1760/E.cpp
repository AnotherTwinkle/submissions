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

    std::vector<int> zv(n), ov(n);
    zv[n - 1] = !v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        zv[i] = zv[i + 1] + !v[i];
    }

    ov[0] = v[0];
    for (int i = 1; i < n; i++) {
        ov[i] = ov[i - 1] + v[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i]) {
            ans += zv[i];
            //std::cout << zv[i] << ' ' << ans << '\n';
        }
    }

    ll ansz = ans, anso = ans;
    for (int i = 0; i < n; i++) {
        if (!v[i]) {
            ansz += zv[i] - 1;
            for (int j = i - 1; j >= 0; j--) {
                if (v[j]) ansz--;
            }
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (v[i]) {
            anso -= zv[i];
            for (int j = i - 1; j >= 0; j--) {
                if (v[j]) anso++; 
            }
            break;
        }
    }

    // std::cout << ans << ' ' << ansz << ' ' << anso << '\n';
    std::cout << std::max({ans, anso, ansz}) << '\n';

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