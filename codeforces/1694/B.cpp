#include <bits/stdc++.h>
#define ll long long

void solve(int test) {
	int n;
	std::string s;
	std::cin >> n >> s;

	ll ans = n;
	for (int i = 1; i < n; i++) {
		if (s[i] != s[i - 1]) {
			ans += i;
		}
	}

	std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++) {
    	solve(i);
    }
}