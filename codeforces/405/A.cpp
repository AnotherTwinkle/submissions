#include <bits/stdc++.h>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> v(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	std::sort(v.begin(), v.end());

	for (int& i : v) std::cout << i << " ";
	std::cout << "\n";
}