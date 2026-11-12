#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        int a, b, c;
        std::cin >> a >> b >> c;
        
        if(
            (a == b - 1 && a == c -2) || 
            (a == c - 1 && a == b -2) || 
            (b == a - 1 && b == c -2) || 
            (b == c - 1 && b == a -2) || 
            (c == a - 1 && c == b -2) || 
            (c == b - 1 && c == a -2)
        ) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}