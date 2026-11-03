#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    int problemCount;
    std::cin >> problemCount;

    int minutesToHouse;
    std::cin >> minutesToHouse;

    int timeLimit;
    timeLimit = 240 - minutesToHouse;

    int maxSolve = std::floor((-2.5 + std::sqrt(6.25+4*2.5*timeLimit))/(5));
    std::cout << std::min(maxSolve, problemCount) << '\n';
}