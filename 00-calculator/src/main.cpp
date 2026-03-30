#include <iostream>
#include "calculator.hpp"

int main() {
    Calculator calc;
    
    std::cout << "=== Calculator Application ===" << std::endl;
    
    std::cout << "5 + 3 = " << calc.add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << calc.subtract(5, 3) << std::endl;
    std::cout << "5 * 3 = " << calc.multiply(5, 3) << std::endl;
    std::cout << "5 / 3 = " << calc.divide(5, 3) << std::endl;
    std::cout << "5 ^ 3 = " << calc.power(5, 3) << std::endl;
    std::cout << "sqrt(25) = " << calc.squareRoot(25) << std::endl;
    std::cout << "5! = " << calc.factorial(5) << std::endl;
    std::cout << "log(10) to base 10 = " << calc.logarithm(10, 10) << std::endl;
    std::cout << "sin(pi/2) = " << calc.sine(3.14159 / 2) << std::endl;
    std::cout << "cos(0) = " << calc.cosine(0) << std::endl;
    std::cout << "tan(pi/4) = " << calc.tangent(3.14159 / 4) << std::endl;
    std::cout << "abs(-5) = " << calc.absolute(-5) << std::endl;

    return 0;
}
