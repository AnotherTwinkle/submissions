#include <bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		std::string s;
		std::cin >> s;

		for (int i = 0; i < n; i++) {
			if (s[i] == 'L' || s[i] == 'R') {
				std::cout << s[i];
			} else {
				std::cout << (s[i] == 'D' ? 'U' : 'D');
			}
		}
		std::cout << "\n";
	}
}