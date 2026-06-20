#include <iostream>

double power(double base, int exp) {
    double result = 1.0;
    int positiveExp = (exp < 0) ? -exp : exp;
    
    for (int i = 0; i < positiveExp; i++) {
        result *= base;
    }
    
    // Negative exponent handle karne ke liye (e.g., 2^-3 = 1 / 2^3)
    if (exp < 0) {
        return 1.0 / result;
    }
    return result;
}

int main() {
    double base;
    int exp;
    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exp;
    
    std::cout << base << "^" << exp << " = " << power(base, exp) << std::endl;
    return 0;
}