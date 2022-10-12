#include <bits/stdc++.h>
using ll = long long;
constexpr int N = 100000;

// !(p - i - 1)
void solve() {
    int n;
    std::string x, y;
    std::cin >> n >> x >> y;
    std::vector<bool> a(n), b(n);
    for (int i = 0; i < n; i++) a[i] = (x[i] == '1'), b[i] = (y[i] == '1');

    std::vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != b[i]) {
            if (a[i] != a[0]) ans.push_back(1), a[0] = !a[0];
            ans.push_back(i + 1);
            for (int j = 0; j <= i; j++) a[j] = !a[j];
            std::reverse(a.begin(), a.begin() + i + 1);
        }   
    }

    std::cout << ans.size() << ' ';
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " ";
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