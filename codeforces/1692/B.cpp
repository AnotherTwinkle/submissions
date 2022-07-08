#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		std::vector<int> v(n);
		for (int i = 0; i < n; i++) std::cin >> v[i];
		std::sort(v.begin(), v.end());

		int s = 1;
		for (int i = 1; i < n; i++) {
			if (v[i-1] != v[i]) s++;
		}

		if ((n - s) % 2) s--;

		std::cout << s << "\n";
	}
}