#include <bits/stdc++.h>
#define send {std::ios::sync_with_stdio(false);}
#define help {std::cin.tie(nullptr);}

void solve() {
    int n, x;
    std::cin >> n >> x;

    std::vector<long long> v(n), psum(n);
    for(int i= 0; i < n; i++) std::cin >> v[i];
    std::sort(v.begin(), v.end());
    std::partial_sum(v.begin(), v.end(), psum.begin());

    long long ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        long long d = x - psum[i];
        if (d >= 0) {
            ans += 1LL * (d / (i+1)) + 1;
        }
    }

    std::cout << ans << "\n";
}

int main() {
    send help

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}