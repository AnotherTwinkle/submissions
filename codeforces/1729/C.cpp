#include <bits/stdc++.h>
using ll = long long;
#define pii std::pair<int, int>

void solve() {
    std::string s;
    std::cin >> s;

    int x = s[0] - 'a' + 1, y = s.back() - 'a' + 1;
    ll n = s.size(), result = 0;
    std::vector<pii> v;
    for (int i = 0; i < n; i++) {
        int j = s[i] - 'a' + 1;
        if (j >= std::min(x, y) && j <= std::max(x, y)) {
            v.push_back({j, i});
        }
    }

    if (x < y) std::sort(v.begin(), v.end(), [&](pii a, pii b) {return a.first < b.first;});
    else std::sort(v.begin(), v.end(), [&](pii a, pii b) {return a.first > b.first;});

    for (int i = 0; i < v.size(); i++) {
        if (v[i].second == 0) std::swap(v[i], v[0]);
        if (v[i].second == n - 1) std::swap(v[i], v.back());
    }

    for (int i = 1; i < v.size(); i++) {
        result += std::abs(v[i - 1].first - v[i].first);
    }

    std::cout << result << ' ' << v.size() << '\n';
    for (int i = 0; i < (int)v.size(); i++) {
        std::cout << v[i].second + 1<<  " \n"[i == v.size() - 1];
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