#include <bits/stdc++.h>

int difference(const std::string& a, const std::string& b) {
	int s = 0;
	for (int i = 0; i < a.length(); i++) {
		s += std::max(a[i] - b[i], b[i] - a[i]);
	}

	return s;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int t;
	std::cin >> t;

	while (t--) {
		int n, l;
		std::cin >> n >> l;

		std::vector<std::string> s(n);
		for (int i = 0; i < n; i++) std::cin >> s[i];

		int m = 1e9;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				m = std::min(m, difference(s[i], s[j]));
			}
		}

		std::cout << m << "\n";
	}
}