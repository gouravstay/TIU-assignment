#include <stdio.h>

// Recursive function to calculate power
double power(double base, int exponent) {
    // Base case: any number raised to the power of 0 is 1
    if (exponent == 0) {
        return 1.0;
    }
    // Recursive case: base multiplied by the power of (exponent - 1)
    else if (exponent > 0) {
        return base * power(base, exponent - 1);
    }
    // Case for negative exponent
    else {
        return 1 / power(base, -exponent);
    }
}

int main() {
    double base;
    int exponent;

    // Input the base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the recursive function and display the result
    double result = power(base, exponent);
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);

    return 0;
}
