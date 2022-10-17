#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> p(n);
    std::vector<std::vector<pair>> graph(n);

    bool f = 1;
    for (int i = 0; i < n - 1; i++) {
        int x, y; std::cin >> x >> y; x--, y--;
        p[x]++, p[y]++;
        if (p[x] > 2 || p[y] > 2) f = 0;
        graph[x].push_back({y, i});
        graph[y].push_back({x, i});
    }

    if (!f) {
        std::cout << "-1\n";
        return;
    }

    std::vector<bool> ans(n - 1);
    std::function<void(int, int, int)> dfs = [&] (int u, int v, int p) {
        for (auto &[x, i] : graph[u]) {
            if (x == v) continue;
            ans[i] = p;
            dfs(x, u, !p);
        }
    };
    
    int min = std::min_element(p.begin(), p.end()) - p.begin();
    dfs(min, -1, 0);

    for (int i = 0; i < n - 1; i++) {
        std::cout << 2 + 3 * ans[i] << " \n"[i == n - 2];
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