#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional>

struct Steepness {
    int steepness;
    int left;

    bool operator>(const Steepness& other) const {
        if (steepness != other.steepness)
            return steepness > other.steepness;
        return left > other.left;
    }

    bool operator<(const Steepness& other) const {
        if (steepness != other.steepness)
            return steepness < other.steepness;
        return left < other.left;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> heights(n);
        for (int j = 0; j < n; ++j) {
            std::cin >> heights[j];
        }

        std::vector<Steepness> steeps(n);
        for (int u = 0; u < n; ++u) {
            if (u == n - 1) {
                steeps[u] = {heights[0] - heights[u], u};
            } else {
                steeps[u] = {heights[u + 1] - heights[u], u};
            }
        }

        std::priority_queue<Steepness> max_heap(steeps.begin(), steeps.end());

        while (!max_heap.empty()) {
            const Steepness& s = max_heap.top();
            std::cout << s.steepness << " " << s.left << "\n";
            max_heap.pop();
        }
    }
}