#include <iostream>

int calculateSum(int a, int b) {
    int sum = a + b; // Line A
    return sum;      // Line B
}

int main() {
    int x = 5;
    int y = 10;
    int result = calculateSum(x, y); // <-- BREAKPOINT HERE (Line C)
    std::cout << result << std::endl; // Line D
    return 0;
}