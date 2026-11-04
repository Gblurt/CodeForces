#include <iostream>
#include <cmath>

int main() {
    long n, m, a;
    std::cin >> n;
    std::cin >> m;
    std::cin >> a;

    long n_stones = std::ceil(static_cast<double>(n) / a);
    long m_stones = std::ceil(static_cast<double>(m) / a);

    std::cout << n_stones * m_stones << '\n';
}