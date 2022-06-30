#include <bits/stdc++.h>

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> v(n);

	for(int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	if(n % 2 != 0) {
		std::cout << "NO\n";
		return;
	}

	std::sort(v.begin(), v.end());
	std::vector<int> f;

	for(int i = 0; i < n / 2; i++) {
		f.push_back(v[i]);
		f.push_back(v[i + n / 2]);
	}


	for(int i = 0; i < n; i++) {
		int nx = i < (n - 1) ? f[i+1] : f[0];
		int pr = i > 0 ? f[i-1] : f[n-1];

		if (!((f[i] > nx && f[i] > pr) || (f[i] < nx && f[i] < pr))) {
			std::cout << "NO\n";
			return;
		}
	}

	std::cout << "YES\n";
	for(int& i : f) {
		std::cout << i << " ";
	}

	std::cout << "\n";
}

int main() {
	int t;
	std::cin >> t;
	while(t--) {
		solve();
	}
}