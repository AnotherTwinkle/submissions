#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin >> s; 
    
    int n = s.size(), f = 0;
    for (int i = 0; i * 2 <= n; i++) {
        if (s[i] == s[n-i-1]) {
            f++;
        } else break;
    }
 
    for (int i = f; i < n - f - 1; i++) {
        if (s[i] == s[i + 1]) {
            i++; 
        } else {
            std::cout << "Alice\n"; 
            return;
        }
    }
  std::cout << "Draw\n";   
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