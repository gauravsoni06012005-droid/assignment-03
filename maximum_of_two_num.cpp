#include <iostream>

int maxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    
    std::cout << "Larger number: " << maxOfTwo(num1, num2) << std::endl;
    return 0;
}