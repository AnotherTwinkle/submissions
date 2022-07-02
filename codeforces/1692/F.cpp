#include <bits/stdc++.h>

void solve() {
	int n;
	std::cin >> n;
	std::vector<int> freq(10, 0);
	
	for (int i = 0; i < n; i++) {
		std::string x;
		std::cin >> x;
		int d = x.back() - '0';
		int mx = (d == 1 ? 3 : 2);
		freq[d] = std::min(mx, freq[d] + 1);
	}

	std::vector<int> v;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < freq[i]; j++) {
			v.push_back(i);
		}
	}

	for(int i : v) std::cerr << i << " ";

	int s = v.size();
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			for (int k = 0; k < s; k++) {
				if (i == j || j == k || i == k) continue;
				if (std::to_string(v[i] + v[j] + v[k]).back() == '3') {
					std::cout << "YES\n";
					return;
				}
			}
		}
	}

	std::cout << "NO\n";
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) solve();
}