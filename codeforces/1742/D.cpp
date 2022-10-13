#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;
std::vector<std::vector<bool>> pre(1001, std::vector<bool>(1001));

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> v;
    std::map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x;
        if (!m[x]) v.push_back(x);
        m[x] = i + 1;
    }

    int s = v.size();
    int max = -1;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (pre[v[i]][v[j]]) max = std::max(max, m[v[i]] + m[v[j]]);
        }
    }
    std::cout << max << '\n';

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
            if (std::__gcd(i, j) == 1) {
                pre[i][j] = 1;
            }
        }
    }
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}