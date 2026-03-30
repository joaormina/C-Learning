#include <iostream>
#include <cmath>

class Calculator {
public:
    /**
     * Adds two numbers.
     * @param a First number.
     * @param b Second number.
     * @return The sum of a and b.
     */
    double add(double a, double b);

    /**
     * Subtracts the second number from the first.
     * @param a First number.
     * @param b Second number.
     * @return The difference of a and b.
     */
    double subtract(double a, double b);

    /**
     * Multiplies two numbers.
     * @param a First number.
     * @param b Second number.
     * @return The product of a and b.
     */
    double multiply(double a, double b);

    /**
     * Divides the first number by the second.
     * @param a First number (numerator).
     * @param b Second number (denominator).
     * @return The quotient of a and b, or 0 if b is zero.
     */
    double divide(double a, double b);

    /**
     * Raises a number to a power.
     * @param base The base number.
     * @param exponent The exponent.
     * @return The result of raising base to the power of exponent.
     */
    double power(double base, double exponent);

    /**
     * Calculates the square root of a number.
     * @param a The number to find the square root of.
     * @return The square root of a.
     */
    double squareRoot(double a);

    /**
     * Calculates the factorial of a non-negative integer.
     * @param n The integer to calculate the factorial of.
     * @return The factorial of n, or 1 if n is 0.
     */
    double factorial(int n);

    /**
     * Calculates the logarithm of a number to a specified base.
     * @param a The number to find the logarithm of.
     * @param base The base of the logarithm.
     * @return The logarithm of a to the base, or 0 if base is invalid.
     */
    double logarithm(double a, double base);


    /**
     * Calculates the sine of an angle in radians.
     * @param angle The angle in radians.
     * @return The sine of the angle.   
     */
    double sine(double angle);

    /**
     * Calculates the cosine of an angle in radians.
     * @param angle The angle in radians.
     * @return The cosine of the angle.   
     */
    double cosine(double angle);

    /**
     * Calculates the tangent of an angle in radians.
     * @param angle The angle in radians.
     * @return The tangent of the angle.   
     */
    double tangent(double angle);

    /**
     * Calculates the absolute value of a number.
     * @param a The number to find the absolute value of.
     * @return The absolute value of a.
     */
    double absolute(double a);
};
