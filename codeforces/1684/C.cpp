#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> grid(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> grid[i][j];
        }
    }

    pair last = {-1, -1};
    std::vector<int> u;
    for (int i = 0; i < n; i++) {
        std::vector<int> swap, dup(grid[i].begin(), grid[i].end());
        std::sort(dup.begin(), dup.end());
        for (int j = 0; j < m; j++) {
            if (dup[j] != grid[i][j]) swap.push_back(j);
        }

        if (swap.size() > 2) {
            std::cout << "-1\n";
            return;
        }

        if (swap.empty()) {
            u.push_back(i);
            continue;
        } else if (last[0] != -1 && (last[0] != swap[0] || last[1] != swap[1])) {
            std::cout << "-1\n";
            return;
        }

        last[0] = swap[0]; last[1] = swap[1];

    }

    last[0] = std::max(0, last[0]), last[1] = std::max(0, last[1]);

    for (int i : u) {
        if (grid[i][last[0]] != grid[i][last[1]]) {
            std::cout << "-1\n";
            return;
        }
    }

    std::cout << (last[0] + 1) << ' ' << (last[1] + 1) << '\n';

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
}