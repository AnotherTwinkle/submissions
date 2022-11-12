#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    int ans = 0;
    for (int i = 1; i <= 100; i++) {
        int x = i;
        if (x > n) break;

        std::vector<int> freq(10);
        for (int j = 0; j < x; j++) {
            freq[s[j] - '0']++;
        }

        for (int j = 0; j + x <= n; j++) {
            if (j) {
                freq[s[j - 1] - '0']--;
                freq[s[j + x - 1] - '0']++;
            }
            
            int max = 0, cnt = 0;
            for (int k : freq) {
                max = std::max(k, max);
                cnt += k > 0;
            }
            ans += max <= cnt;
        }
        // std::cout << x << ' ' << cnt << '\n';
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