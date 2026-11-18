#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        std::vector<long long> a_array(n);

        for(int j = 0; j < n; ++j) {
            long long a;
            std::cin >> a;
            a_array[j] = a;
        }

        long long pre_sum = std::accumulate(a_array.begin(), a_array.end() - 1, 0);

        bool negative = pre_sum < 0;

        for(int j = 1; j < n - 1; ++j) {
            long long sum = std::accumulate(a_array.begin(), a_array.begin() + j, 0);
            if(sum < 0 && negative || sum >= 0 && !negative) {
                a_array[j] = a_array[j] + sum;
            } else {
                a_array[j] = a_array[j] - sum;
            }
        }

        long long sum = std::accumulate(a_array.begin(), a_array.end() - 1, 0);
        if(sum < 0) {
            a_array[n - 1] = a_array[n-1] - sum;
        } else {
            a_array[n - 1] = a_array[n-1] + sum;
        }

        std::cout << a_array[n-1] << "\n";
    }
}