#include <bits/stdc++.h>
using ll = long long;

// This tool... way long than it should have been :)
void solve() {
    int n, d;
    std::cin >> n >> d;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end(), std::greater<int>());
    int l = 0, r = 0, ans = 0;
    while (l < n) {
        r += d / v[l];
        if (n - r <= l) {
            break;
        }
        ans++, l++;
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }
}