#include "calculator.hpp"

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // Return 0 or handle as needed
    }
    return a / b;
}

double Calculator::power(double base, double exponent) {
    return std::pow(base, exponent);
}

double Calculator::squareRoot(double a) {
    if (a < 0) {
        std::cerr << "Error: Cannot calculate square root of a negative number!" << std::endl;
        return 0; // Return 0 or handle as needed
    }
    return std::sqrt(a);
}

double Calculator::logarithm(double a, double base) {
    if (base <= 1 || a <= 0) {
        std::cerr << "Error: Invalid input for logarithm!" << std::endl;
        return 0; // Return 0 or handle as needed
    }
    return std::log(a) / std::log(base);
}

double Calculator::factorial(int n) {
    if (n < 0) {
        std::cerr << "Error: Factorial is not defined for negative numbers!" << std::endl;
        return 0; // Return 0 or handle as needed
    }
    if (n == 0) {
        return 1;
    }
    double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double Calculator::sine(double angle) {
    return std::sin(angle);
}

double Calculator::cosine(double angle) {
    return std::cos(angle);
}

double Calculator::tangent(double angle) {
    return std::tan(angle);
}

double Calculator::absolute(double a) {
    return std::abs(a);
}