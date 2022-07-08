#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;
	
	while (t--) {
		int n;
		std::cin >> n;
		std::cout << 2 << "\n";

		std::vector<int> v;
		for (int i = 1; (i * 2) <= n; i++) {
			v.push_back(i);
		}

		std::vector<bool> f(n, 0);
		for(int i : v) {
			for (int j = i; j <= n; j *= 2) {
				if (!f[j-1]) {
					std::cout << j << " ";
					f[j-1] = 1;
				}
			}
		}

		for(int i = 0; i < n; i++) {
			if (!f[i]) std::cout << i + 1 << " ";
		}

		std::cout << "\n";
	}
}
