#include <bits/stdc++.h>
using ll = long long;

// a must be different than b
// If a points to b, b must not point to b
void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::string alpha = "abcdefghijklmnopqrstuvwxyz";

    std::string ans;
    std::map<char, char> t, w;
    int done = 0;
    std::function<char(char)> findnext = [&](char a) {
        if (t[a]) return t[a];
        char x = *std::find_if(alpha.begin(), alpha.end(), [&] (char i) {
            bool f = !w[i] && a != i;
            while (t[i]) {
                i = t[i];
            }
            return (i != a || done == 25) && f;
        });
        t[a] = x;
        w[x] = a;
        done++;
        return x;
    };

    for (int i = 0; i < n; i++) {
        char x = findnext(s[i]);
        ans += x;
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