#include <bits/stdc++.h>
using ll = long long;
using pair = std::array<int, 2>;

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> freq(26);
    for (int i = 0; i < n; i++) {
        char x; std::cin >> x;
        freq[x - 'a']++;
    }

    int e = 0, o = 0;
    for (int i : freq) {
        e += i >> 1;
        o += i % 2;
    }

    int ans = (e / k) << 1; o += (e % k) << 1;
    std::cout << ans + (o >= k) << '\n';

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