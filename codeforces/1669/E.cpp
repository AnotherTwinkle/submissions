#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::vector<std::array<int, 2>> v(n);
    std::vector<std::vector<int>> freq(26, std::vector<int>(26));
    for (int i = 0; i < n; i++) {
        std::string s; std::cin >> s;
        freq[s[0] - 'a'][s[1] - 'a']++;
        v[i] = {s[0] - 'a', s[1] - 'a'};
    }

    ll ans = 0;
    for (auto& str : v) {
        freq[str[0]][str[1]]--;
        int x = std::accumulate(freq[str[0]].begin(), freq[str[0]].end(), 0) - freq[str[0]][str[1]];
        int y = -freq[str[0]][str[1]];
        for (int i = 0; i < 26; i++) {
            y += freq[i][str[1]];
        }
        ans += x + y;

    }

    std::cout << ans << '\n';
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