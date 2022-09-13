#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int i = 0; i < n; i++)  {
        int x; std::cin >> x;
        v[i] -= x;
    }

    std::sort(v.begin(), v.end());
    // We want the biggest element y that satisfies x + y <= 0
    int cnt = 0;
    int l = 0, r = n - 1;
    while (l < r) {
        while(v[l] + v[r] > 0 && l < r) {
            r--;
        }
        if (l >= r) break;

        if (v[l] + v[r] <= 0) {
            l++;
            r--;
            cnt++;
        }
    }

    std::cout << cnt << '\n';
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