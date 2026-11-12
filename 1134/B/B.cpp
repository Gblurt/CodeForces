#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        std::string word;
        std::cin >> word;

        bool isRed = true;
        int count = 0;
        for(int j = 0; j < n; ++j) {
            char c = word[j];
            if(isRed && c == 'B'){
                ++count;
            } else if (!isRed && c == 'R'){
                ++count;
            } else {
                isRed = !isRed;
            }
        }
        std::cout << count << '\n';
    }
}