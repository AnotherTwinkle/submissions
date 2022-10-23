#include <bits/stdc++.h>
#define ll long long

void solve() {
	int n;
	std::string s;
	std::cin >> n >> s;

	int q = 0;
	for (char& i : s) {
		if (i == 'A' && q) {
			q--;
		} 
		else if (i == 'Q') {
			q++;
		}
	}

	std::cout << (q ? "NO\n" : "YES\n");
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    int t;
    std::cin >> t;
    while (t--) {
    	solve();
    }
}