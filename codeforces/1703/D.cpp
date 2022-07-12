#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::map<std::string, bool> m;
    std::vector<std::string> v(n);

    for (int i = 0; i < n; i++) {
        std::string x;
        std::cin >> x;
        m[x] = 1;
        v[i] = x;
    }

    for (std::string i : v) {
        bool f = 0;
        for (int j = 1; j < i.length() + 1; j++) {
            int x = i.length() - j;
            std::string a = i.substr(0, j);
            std::string b = i.substr(j, x);

            if(m[a] && m[b]) {
                f = 1;
                break;
            }
        }
        std::cout << f;
    }

    std::cout << "\n";
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