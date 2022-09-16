#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n, m, k;
    std::cin >> n >> m >> k;

    std::string a, b, ans;
    std::cin >> a >> b;

    std::sort(a.begin(), a.end(), std::greater<char>());
    std::sort(b.begin(), b.end(), std::greater<char>());

    int i = 0, j = 0, ap = n - 1, bp = m - 1;
    while (ap >= 0 && bp >= 0) {
        if (ap < 0) {
            ans += b[bp]; bp--;
        } else if (bp < 0) {
            ans += a[ap]; ap--;
        } else {
            if (a[ap] < b[bp]) {
                if (i < k) {
                    ans += a[ap]; ap--;
                    i++; j = 0;
                } 

                else {
                    ans += b[bp]; bp--;
                    j++; i = 0;
                }
            }
            else {
                if (j < k) {
                    ans += b[bp]; bp--;
                    j++; i = 0;
                }
                else {
                    ans += a[ap]; ap--;
                    i++; j = 0;
                }
            }
        }
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