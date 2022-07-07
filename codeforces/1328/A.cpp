#include <bits/stdc++.h>

int main() {
	int t;
	std::cin >> t;
	while(t--) {
		int n, k;
		std::cin >> n >> k;
		std::cout << (n % k ? k - (n % k) : 0) << "\n";
	}
}