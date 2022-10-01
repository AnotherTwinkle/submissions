#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;

    std::map<int, int> wishes;
    std::vector<int> gifts(n, -1), gifter(n, -1);
    std::set<int> ug, uf;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x; std::cin >> x; x--;

        wishes[i] = x;
        if (gifter[x] >= 0) uf.insert(i);
        else {
            ans++;
            gifts[i] = x;
            gifter[x] = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (gifter[i] < 0) {
            ug.insert(i);
        }
    }

    if (uf.size() == 1 && *uf.begin() == *ug.begin()) {
        int x = *uf.begin();
        int g = gifter[wishes[x]];
        gifts[x] = wishes[x];
        gifts[g] = x;
    } else {
        std::vector<int> dup;
        for (int x : uf) {
            if (ug.count(x) > 0) {
                dup.push_back(x);         
                ug.erase(x);
            }
        }

        for (int i = 0; i < dup.size(); i++) {
            uf.erase(dup[i]);
        }

        if (dup.size() == 1) {
            gifts[dup[0]] = *ug.begin();
            ug.erase(*ug.begin());
            ug.insert(dup[0]);
        } else if (dup.size()) {
            for (int i = 0; i < (int)dup.size() - 1; i++) {
                gifts[dup[i]] = dup[i + 1];
            }
            gifts[dup.back()] = dup[0];
        }

        auto x = uf.begin(), y = ug.begin();
        while(x != uf.end()) {
            gifts[*x] = *y;
            x++, y++;
        }
    }

    std::cout << ans << '\n';
    for (int i = 0; i < n; i++) {
        std::cout << gifts[i] + 1 << " \n"[i == n - 1];
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