#include <bits/stdc++.h>

int main() {
	std::string n;
	std::cin >> n;

	int f= 0;
	for (char& i : n) f += (i == "hello"[f]);
	std::cout << (f == 5 ? "YES" : "NO") << "\n";
}