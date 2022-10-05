#include <bits/stdc++.h>
using ll = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> cost;
    std::function<bool(int, int)> comp = [&](int a, int b) {
        if (cost[a - 1] == cost[b - 1]) {
            return a < b;
        }
        return cost[a - 1] > cost[b - 1];
    };

    std::set<int> ins;
    std::set<int, decltype(comp)> ord(comp);

    int i = 1;
    while (n--) {
        int x; std::cin >> x;
        if (x == 1) {
            int m; std::cin >> m;
            cost.push_back(m);
            ins.insert(i);
            ord.insert(i);
            i++;
        } else if (x == 2) {
            int c = *ins.begin();
            ins.erase(c), ord.erase(c);
            std::cout << c << ' ';
        } else {
            int c = *ord.begin();
            ins.erase(c), ord.erase(c);
            std::cout << c << ' ';
        }
    }
}