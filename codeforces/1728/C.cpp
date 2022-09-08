#include <bits/stdc++.h>
using ll = long long;

// We want to make sure that the the n-2th element yields 0.
void solve() {
    int n;
    std::cin >> n;
    std::vector<int> u(n), v(n);
    std::map<int, int> vm;

    for (int i = 0; i < n; i++) {
        std::cin >> u[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
        vm[v[i]]++;
    }

    int aff = 0;
    std::vector<int> a, b;
    for (int i = 0; i < n; i++) {
        if (vm[u[i]]) {
            vm[u[i]]--;
            aff++;
        }
        else {
            a.push_back(u[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (vm[v[i]]) {
            b.push_back(v[i]);
            vm[v[i]]--;
        }
    }

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    n -= aff;
    int moves = 0;
    for (int i = 0; i < n; i++) {

        if (a[i] > 9) {
            a[i] = std::log10(a[i]) + 1;
            moves++;
        }

        if (b[i] > 9) {
            b[i] = std::log10(b[i]) + 1;
            moves++;
        }
    }

    std::map<int, int> map;
    for (int i = 0; i < n; i++) {
        map[b[i]]++;
    }

    int eff = 0;
    std::vector<int> x, y;
    for (int i = 0; i < n; i++) {
        if (map[a[i]]) {
            map[a[i]]--;
            eff++;
        }
        else {
            x.push_back(a[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (map[b[i]]) y.push_back(b[i]);
    }

    std::sort(x.begin(), x.end());
    std::sort(y.begin(), y.end());
    n -= eff;
    for (int i = 0; i < n; i++) {
        if (x[i] > 1) moves++;
        if (y[i] > 1) moves++;
    }

    std::cout << moves << '\n';
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