#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    
    std::cout << "Sum: " << sum(num1, num2) << std::endl;
    return 0;
}