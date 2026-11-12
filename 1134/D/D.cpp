#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    
    for (int i = 0; i < t; ++i) {
    int n;
    std::cin >> n;

    std::string letters;
    std::cin >> letters;

    int count = 0;
    bool is_pal = false;
    while (!is_pal) {
        is_pal = true;
        char big = 0;
        for (int j = 0; j < n; j++) {
            if (letters[j] != letters[n - j - 1]) {
                is_pal = false;
                big = std::max(big, std::max(letters[j], letters[n - j - 1]));
            }
        }

        if (!is_pal) {
            ++count;
            for (int j = 0; j < n; j++) {
                if (letters[j] == big) letters[j] = big - 1;
            }
        }
    }
    std::cout << count << '\n';
}
}