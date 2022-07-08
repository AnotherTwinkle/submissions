#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n, m;
		std::cin >> n;

		int o = 0;
		int e = 0;
		while(n--) {
			int x;
			std::cin >> x;
			if (x % 2) o++;
			else e++;
		}
		std::cout << std::min(o, e) << "\n";
	}
}
