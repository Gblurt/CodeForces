#include <iostream>

int main() {
    int contestCount;
    std::cin >> contestCount;

    int firstScore;
    std::cin >> firstScore;

    int max, min, amazing;
    amazing = 0;
    max = firstScore;
    min = firstScore;

    for(int i = 1; i < contestCount; ++i) {
        int score;
        std::cin >> score;

        if(score > max) {
            ++amazing;
            max = score;
        } else if(score < min) {
            ++amazing;
            min = score;
        }
    }
    std::cout << amazing << '\n';
}