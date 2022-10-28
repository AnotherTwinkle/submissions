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

    std::vector<int> p(m);
    std::iota(p.begin(), p.end(), 0);

    pair check;
    check[0] = check[1] = -1;

    std::vector<bool> done(n);
    for (int i = 0; i < n; i++) {
        std::vector<int> dup(grid[i].begin(), grid[i].end());
        std::sort(dup.begin(), dup.end());

        pair temp;
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            if (dup[j] != grid[i][j]) {
                if (cnt > 1) {
                    std::cout << "-1\n";
                    return;
                }

                temp[cnt] = j;
                cnt++;
                done[i] = 1;
            }
        }

        if (cnt) {
            if (temp[0] > temp[1]) std::swap(temp[0], temp[1]);
            if (check[0] >= 0) {
                if (check[0] != temp[0] || check[1] != temp[1]) {
                    std::cout << "-1\n";
                    return;
                }
            } else {
                check[0] = temp[0];
                check[1] = temp[1];
            } 
        }
    }

    for (int i = 0; i < n; i++) {
        if (!done[i] && check[0] >= 0) {
            if (grid[i][check[0]] != grid[i][check[1]]) {
                std::cout << "-1\n";
                return;
            }
        }
    }

    std::cout << (std::max(check[0], 0) + 1) << " " << (std::max(check[1], 0) + 1) << '\n';
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