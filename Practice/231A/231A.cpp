#include <iostream>

int main() {
    int problemCount;
    std::cin >> problemCount;

    int implemented = 0;
    for(int i = 0; i < problemCount; ++i) {
        int sureCount = 0;
        for(int j = 0; j < 3; ++ j) {
            int sure;
            std::cin >> sure;
            sureCount += sure;
        }

        if(sureCount >= 2) {
            implemented += 1;
        }
    }
    std::cout << implemented << '\n';
}