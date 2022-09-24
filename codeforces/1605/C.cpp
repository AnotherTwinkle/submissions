#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::string s;
    std::cin >> n >> s;

    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') a.push_back(i);
    }

    if ((int)a.size() < 2) {
        std::cout << "-1\n";
        return;
    }

    int min = 1e9;
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i + 1] - a[i] <= 2) {
            min = std::min(1 + a[i + 1] - a[i], min);
        }   

        if (a[i + 1] - a[i] == 3) {
            if (s[a[i] + 1] != s[a[i + 1] - 1]) {
                min = std::min(min, 4);
            } else {
                if (i < a.size() - 2 && a[i + 2] - a[i + 1] == 3 && s[a[i + 1] + 1] != s[a[i] + 1]) {
                    min = std::min(min, 7);
                }
            }
        }
    }

    std::cout << (min == 1e9 ? -1 : min) << '\n';
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