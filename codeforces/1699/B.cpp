#include <bits/stdc++.h>

void solve() {
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>> b(n, std::vector<int>(m, 3));

	auto puts = [](auto b, int x, int y, bool w) {
		b[x][y] = b[x+1][y+1] = w;
		b[x+1][y] = b[x][y+1] = !w;
		return b;
	};

	// Fill up the corners, I guess
	b = puts(b, 0, 0, 0); // Top left
	b = puts(b, n - 2, 0, 1); // Bottom left
	b = puts(b, 0, m - 2, 1); // Top right
	b = puts(b, n - 2, m - 2, 0); // Bottom right

	// Fill up the leftmost "blocks"
	for(int i = 2; i < n; i+=2) {
		b = puts(b, i, 0, b[i-1][0]);
	}

	// We can now scan through the board and fill up;
	for(int i = 0; i < n; i+=2) {
		for(int j = 2; j < m; j+=2){
			b = puts(b, i, j, b[i][j-1]);
		}
	}


	for(std::vector<int> i : b) {
		for(int j : i) {
			std::cout << j << " ";
		}
		std::cout << "\n";
	}

}

int main() {
	int t;
	std::cin >> t;
	while(t--) {
		solve();
	}
}