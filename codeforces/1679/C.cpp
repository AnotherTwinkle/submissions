#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

// Todo : solve with binary search.
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, q;
    std::cin >> n >> q;
    ordered_set fx, fy;
    std::vector<int> cntx(n), cnty(n);

    auto contains = [&](ordered_set& arr, int a, int b) {
        if (arr.find(a) == arr.end() || arr.find(b) == arr.end()) return false;
        int i = (arr.order_of_key(a));
        int j = (arr.order_of_key(b));
        if (std::abs(i - j) == std::abs(a - b)) {
            return true;
        }

        return false;
    };

    while (q--) {
        int s; std::cin >> s;
        if (s == 1) {
            int x, y; std::cin >> x >> y;
            x--, y--;
            fx.insert(x), fy.insert(y);
            cntx[x]++, cnty[y]++;
        }

        else if (s == 2) {
            int x, y; std::cin >> x >> y;
            x--, y--, cntx[x]--, cnty[y]--;
            if (!cntx[x]) fx.erase(x);
            if (!cnty[y]) fy.erase(y);
        }

        else {
            int x1, x2, y1, y2;
            std::cin >> x1 >> y1 >> x2 >> y2;
            x1--, x2--, y1--, y2--;

            if (contains(fx, x1, x2) || contains(fy, y1, y2)) {
                std::cout << "Yes\n";
                continue;
            }

            std::cout << "No\n";
        }
    }
}