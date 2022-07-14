#include <bits/stdc++.h>

int solve() {
	int n;
	std::cin >> n;

	std::vector<int> rsum(n + 1), lsum(n + 1);
	std::vector<int> r(n);

	for (int i = 0; i < n; i++) std::cin >> r[i];
	for (int i = n - 1; i >= 0; i--) {
		rsum[i] = rsum[i + 1] + r[i];
	}

	for (int i = 1; i <= n; i++) {
		int x;
		std::cin >> x;
		lsum[i] = lsum[i - 1] + x;
	}

	int min = 1e9;
	for(int i = 0; i < n; i++) {
		min = std::min(min, std::max(lsum[i], rsum[i+1]));
	}

	return min;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int t;
	std::cin >> t;
	while (t--) {
		std::cout << solve() << "\n";
	}
}