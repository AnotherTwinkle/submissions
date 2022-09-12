#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::string s, ans;
    std::cin >> n >> s;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            ans += ('a' - 1 + ((s[i - 2] - '0') * 10 + (s[i - 1] - '0')));
            i -= 2;
        } else {
            ans += ('a' - 1 + (s[i] - '0'));
        }
    }

    std::reverse(ans.begin(), ans.end());
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