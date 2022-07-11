#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int h, w;
        std::cin >> h >> w;

        if (h % 2) {
            for (int j = 0; j < w; j++) {
                std::cout << "10"[j % 2];
            }
            std::cout << "\n";

            for (int i = 1; i < h - 1; i++) {
                if (i % 2) std::cout << std::string(w, '0');
                else std::cout << "1" << std::string(w - 2, '0') << "1";
                std::cout << "\n";
            }

            for (int j = 0; j < w; j++) {
                std::cout << "10"[j % 2];
            }

        } else {
            for (int j = 0; j < w - 2; j++) {
                std::cout << "10"[j % 2];
            }

            std::cout << "00\n";

            for (int i = 1; i < h - 1; i++) {
                if (i % 2) std::cout << std::string(w - 1, '0') << "1";
                else std::cout << "1" << std::string(w - 1, '0');
                std::cout << "\n";
            }

            std::cout << "00";
            for (int j = 2; j < w; j++) {
                std::cout << "01"[j % 2 == 0];
            }
        }
        std::cout << "\n\n";
    }
}