#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << (a * (100 - b) >= 10000 ? 0 : 1);
    return 0;
}