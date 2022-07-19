#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) std::cin >> v[i];
    std::sort(v.begin(), v.end());

    int m = 0;
    for (int i = 2; i < n + 1; i += 2) {
        if (i != n) {
            std::swap(v[i - 2], v[i - 1]);
            m++;
        }
    }

    std::cout << m<< "\n";
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " \n"[i == n - 1];
    }
}

