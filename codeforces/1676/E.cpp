#include <bits/stdc++.h>
#include <cmath>

int main() {
	std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n, q;
		std::cin >> n >> q;
		std::vector<int> v(n);

		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
		}

		int sum = std::accumulate(v.begin(), v.end(), 0);
		std::sort(v.begin(), v.end(), std::greater<int>());

		std::vector<int> p(n);
		int prev = 0;
		for( int i = 0; i < n; i++) {
			p[i] = prev + v[i];
			prev = p[i];
		}

		while (q--) {
			int s;
			std::cin >> s;

			if (s > sum) {
				std::cout << -1 << "\n";
				continue;
			}

			// Effing binary search...
			int l = 0;
			int r = n - 1;
			while (l <= r) {
				int m = std::floor((l + r) / 2);
				// std::cout << l << " " << m << " " << r << "\n";
				if(l == r) {
					std::cout << m + 1 << "\n";
					break;
				}

				if(p[m] >= s) r = m;
				if(p[m] < s) l = m + 1;
			}
		}
	}

	return 0;
}