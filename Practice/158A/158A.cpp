#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> scores(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    std::nth_element(scores.begin(), scores.begin() + (n-k), scores.end());
    int k_score = scores[n - k];

    int passing = 0;
    for (int s : scores) {
        if (s >= k_score && s > 0) ++passing;
    }
    std::cout << passing << '\n';
}