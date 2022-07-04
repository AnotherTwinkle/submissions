#include <bits/stdc++.h>

void solve() {
	int n;
	std::cin >> n;

	if (n % 2 == 1) {
		std::cout << "-1\n";
	} else {
		std::cout << n / 2 << " " << 0 << " " << n/2 << "\n";
	}
}

int main() {
	int t;
	std::cin >> t;
	while(t--) {
		solve();
	}
}