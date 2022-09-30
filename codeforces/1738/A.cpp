#include <bits/stdc++.h>
using ll = long long;

// The minimum of type of which there is maximum (or minimum of whole array)
// Maximum of opposing
// Maximum of opposing
// Maximum of opposing
// And so on.

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> s(n);
    std::array<std::vector<int>, 2> v;

    int z = 0, o = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
        z += !s[i];
        o += s[i];
    }

    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        v[s[i]].push_back(x);
    }

    std::sort(v[0].begin(), v[0].end());
    std::sort(v[1].begin(), v[1].end());

    ll ans = 0; bool f = 0;
    if (o > z) {
        f = 1;
    } else if (z > o) {
        f = 0;
    } else {
        f = (std::min(v[0][0], v[1][0]) == v[1][0]);
    }

    ans += v[f][0]; v[f][0] = 0; f = !f;
    bool t = 1;
    while (v[0].size() || v[1].size()) {
        if (!v[f].size()) {
            t = 0;
            f = !f;
            continue;
        }

        ans += t ? v[f].back() * 2 : v[f].back(); v[f].pop_back();
        f = !f;
    }

    std::cout << ans << '\n';

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