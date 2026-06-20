#include <iostream>

// long long use kiya hai taaki bade numbers ka factorial bhi calculate ho sake
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (num < 0) {
        std::cout << "Factorial of negative numbers doesn't exist." << std::endl;
    } else {
        std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    }
    return 0;
}