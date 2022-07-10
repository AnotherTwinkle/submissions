#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        int n;
        std::cin >> n;

        int sum = 0;
        std::vector<std::pair<int, int>> v(s.length());
        for (int i = 0; i < s.length(); i++) {
            int x = s[i] - 'a' + 1;
            v[i] = std::make_pair(x, i);
            sum += x;
        }

        auto comp =  [](std::pair<int, int> a, std::pair<int, int> b) {return a.first > b.first;};
        std::sort(v.begin(), v.end(), comp);

        int k = 0;
        for (int i = 0; i < s.length(); i++) {
            if(sum <= n) break;
            sum -= v[i].first;
            k++;
        }

        auto comp2 = [](std::pair<int, int> a, std::pair<int, int> b) {return a.second < b.second;};
        std::sort(v.begin()+k, v.end(), comp2);

        for(int i = k; i < s.length(); i++) {
            char c = 'a' + (v[i].first - 1);
            std::cout << c;
        }

        std::cout << "\n";
    }
}