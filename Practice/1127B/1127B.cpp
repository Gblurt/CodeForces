#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        std::vector<int> a_array(n);

        for(int j = 0; j < n; ++j) {
            int a;
            std::cin >> a;
            a_array.push_back(a);
        }

        int pre_sum = std::accumulate(a_array.begin(), a_array.end() - 1, 0);
        
    }
}