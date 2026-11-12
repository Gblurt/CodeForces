#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        std::vector<int> v(n);
        for(int j = 0; j < n; ++j) {
            std::cin >> v[j];
        }

        std::make_heap(v.begin(), v.end(), std::greater<int>());

        int left = 0;
        int right = 0;
        std::vector<int> result(n);
        int left_i = 0;
        int right_i = n - 1;
        int count = 0;
        while(!v.empty()) {
            std::pop_heap(v.begin(), v.end(), std::greater<int>());
            int height = v.back();
            v.pop_back();
            if(height > left) {
                left = height;
                result[left_i] = height;
                ++left_i;
                ++count;
            } else if (height > right)
            {
                right = height;
                result[right_i] = height;
                --right_i;
                ++count;
            } else {
                result[left_i] = height;
                ++left_i;
            }
        }
        std::cout << count << "\n";
        for (int n : result) {
            std::cout << n << " ";
        }
        std::cout << '\n';
    }
}