#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> v(n);
        for (int i = 0; i < n; i++) {
            std::cin >> v[i];
        }

        std::vector<int> il(n);
        for (int i = 0; i < n; i++) {
            std::cin >> il[i];
        }

        std::sort(v.begin(), v.end());
        std::sort(il.begin(), il.end());

        int k = n - std::floor(n / 4);
        int vsum = std::accumulate(v.end() - k, v.end(), 0);
        int ilsum = std::accumulate(il.end() - k, il.end(), 0);

        if (vsum >= ilsum) {
            std::cout << "0\n";
            continue;
        }

        int c = 0;
        int rem = n - k;
        while (vsum < ilsum) {
            c++;
            int x = (n + c) - std::floor((n + c) / 4);
            vsum += (rem < n ? 100 - v[rem] : 100);
            rem++;

            if (x > k) {
                k++;
                rem--;
                vsum += v[rem];
                ilsum += (n - k < 0 ? 0 : il[n - k]);
            }
        }

        std::cout << c << "\n";
    }
}