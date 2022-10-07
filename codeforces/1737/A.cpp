#include <bits/stdc++.h>
using ll = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::string s;
        std::cin >> n >> k >> s;

        std::vector<int> freq(26);
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < k; i++) {
            int cnt = 0;
            for (int j = 0; j < 26; j++) {
                if (cnt < (n / k) && freq[j]) cnt++, freq[j]--;
                else break;
            }

            std::cout << (char)('a' + cnt);
        }

        std::cout << '\n';
    }
}