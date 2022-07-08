#include <bits/stdc++.h>


int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;
	
	while (t--) {
		bool a, b, c, d;
		std::cin >> a >> b >> c >> d;

		if (a + b + c + d == 0) std::cout << 0 << "\n";
		else std::cout << (((a + b + c + d ) > 3) ? 2 : 1) << "\n";
	}
}
