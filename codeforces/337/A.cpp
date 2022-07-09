#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k, n;
    std::cin >> k >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) std::cin >> v[i];
    std::sort(v.begin(), v.end());

    int min = 1e8;
    for (int i = k - 1; i < n; i++) {
        min = std::min(min, v[i] - v[i - k + 1]);
    }

    std::cout << min << "\n";
}