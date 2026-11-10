#include <iostream>
#include <string>

int main() {
    int word_count;
    std::cin >> word_count;

    for(int i = 0; i < word_count; ++i) {
        std::string word;
        std::cin >> word;
        if(word.length() <= 10) {
            std::cout << word << '\n';
        } else {
            std::cout << word[0] << word.length() - 2 << word.back() << '\n';
        }
    }
    return 0;
}