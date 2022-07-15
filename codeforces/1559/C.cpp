#include <bits/stdc++.h>

std::vector<int> solve() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::vector<int> ans(n + 1);
    if (!v.back()) { // Village n has a path to n + 1
        std::iota(ans.begin(), ans.end(), 1);
        return ans;
    }

    if (v[0]) { // We can start at the last village!
        ans[0] = n + 1;
        std::iota(ans.begin() + 1, ans.end(), 1);
        return ans;
    }

    // If i has a path available to n + 1, n + 1 must also have a path back to n + 1;
    for (int i = 0; i < n - 1; i++) {
        if (!v[i] && v[i + 1]) {
            for (int j = 0; j <= i; j++) {
                ans[j] = j + 1;
            }

            ans[i + 1] = n + 1;

            for (int j = i + 2; j < n + 1; j++) {
                ans[j] = j;
            }

            return ans;
        }
    }

    std::cout << "-1\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        for (int i : solve()) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
}