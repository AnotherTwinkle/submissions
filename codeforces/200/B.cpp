#include <bits/stdc++.h>

int main() {
	double n;
	std::cin >> n;

	double s = 0;
	for(int i = 0; i < n; i++) {
		double x;
		std::cin >> x;
		s += x;
	}

	std::cout << s / n << "\n";
}