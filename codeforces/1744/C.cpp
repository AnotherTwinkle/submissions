#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n; char k; std::string s;
    std::cin >> n >> k >> s;

    if (k == 'g') {std::cout << "0\n"; return;}
    std::vector<int> g, nxt(n, -1);
    int idx = -1;
    for (int i = n - 1; i >= 0 ; i--) {
        if (s[i] == 'g') idx = i;
        if (idx >= 0) nxt[i] = idx;
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != k) continue;
        if (nxt[i] > 0) {
            max = std::max(max, nxt[i] - i);
        } else {
            max = std::max(max, n - i + nxt[0]);
        }
    }

    std::cout << max << '\n';
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