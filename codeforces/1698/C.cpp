#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int t;
    std::cin >> t;
    int p = 0, n = 0; bool z = 0;
    std::vector<int> v;
    for (int i = 0; i < t; i++) {
        int x; std::cin >> x;
        if (x || !z) v.push_back(x);
        if (x < 0) n++;
        else if (x > 0) p++;
        else z = 1;
    }

    if (p > 2 - z || n > 2 - z) {
        std::cout << "NO\n";;
        return;
    }

    int s = v.size();
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            for (int k = 0; k < s; k++) {
                if (i == j || j == k || i == k) continue;
                if (std::find(v.begin(), v.end(), v[i] + v[j] + v[k]) == v.end()) {
                    std::cout << "NO\n";
                    return;
                }
            }
        }
    }

    std::cout << "YES\n";
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