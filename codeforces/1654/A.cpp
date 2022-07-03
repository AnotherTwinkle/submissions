#include <bits/stdc++.h>

int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::vector<int> v(n);

		for (int i = 0; i < n; i++) std::cin >> v[i];
		std::sort(v.begin(), v.end(), std::greater<int>());

		std::cout << v[0] + v[1] << "\n";
	}
}