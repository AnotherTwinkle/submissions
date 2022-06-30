#include <bits/stdc++.h>

void solve() {
	std::string s;
	std::cin >> s;

	if(s.find('B') == std::string::npos) {
		std::cout << "NO\n";
		return;
	}

	int n = s.length();
	if(s[n-1] == 'A') {
		std::cout << "NO\n";
		return;
	}
	
	for(int i = 0; i < n; i++) {
		if(s[i] == 'B') {
			if(!i || s[i - 1] != 'A') {
				std::cout << "NO\n";
				return;
			}

			s.erase(i - 1, 2);
			n -= 2;
			i -= 2;
		}
	}

	std::cout << "YES\n";
}

int main() {
	int t;
	std::cin >> t;
	while(t--) {
		solve();
	}
}