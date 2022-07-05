#include <bits/stdc++.h>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	int m, mmax;
	m = mmax = 1;
	for (int i = 1; i < n; i++) {
		if (v[i] >= v[i-1]) m++;
		else m = 1;

		mmax = std::max(mmax, m);
	}

	std::cout << mmax << "\n";
}