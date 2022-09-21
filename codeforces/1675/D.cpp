#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    int root;
    std::map<int, std::vector<int>> parents;
    for (int i = 1; i <= n; i++) {
        int x; std::cin >> x;
        if (x == i) root = i;
        else parents[x].push_back(i);
    }

    std::vector<std::vector<int>> ans;
    std::function<std::vector<int>(int)> traverse = [&](int u) {
        std::vector<int> result;
        result.push_back(u);

        while (!parents[u].empty()) {
            int x = parents[u][0];
            for (int i = 1; i < parents[u].size(); i++) {
                ans.push_back(traverse(parents[u][i]));
            }
            result.push_back(x);
            u = x;
        }

        return result;
    };

    ans.push_back(traverse(root));

    std::cout << ans.size() << '\n';
    for (auto& i : ans) {
        std::cout << i.size() << '\n';
        for (int j = 0; j < i.size(); j++) {
            std::cout << i[j] << " \n"[j == i.size() - 1];
        }
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