#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

std::map<char, char> ref;
bool valid(std::string time, int h, int m) {
    std::string s;
    for (int i = 3; i >= 0; i--) {
        if (!ref[time[i]]) return 0;
        else s += ref[time[i]];
    }

    return std::stoi(s.substr(0, 2)) < h && std::stoi(s.substr(2, 2)) < m;
}

void solve() {
    int h, m; std::string s;
    std::cin >> h >> m >> s;
    int x = std::stoi(s.substr(0, 2));
    int y = std::stoi(s.substr(3, 2));

    while (1) {
        std::string sh = std::to_string(x); if (sh.length() < 2) sh = "0" + sh;
        std::string sm = std::to_string(y); if (sm.length() < 2) sm = "0" + sm;
        if (valid(sh + sm, h, m)) {
            std::cout << sh << ':' << sm << '\n';
            return;
        } 
        y++;
        if (y >= m) {
            y = 0;
            x++;
        }

        if (x >= h) {
            x = 0;
        }    
    }

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ref['0'] = '0';
    ref['1'] = '1';
    ref['2'] = '5';
    ref['5'] = '2';
    ref['8'] = '8';

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}