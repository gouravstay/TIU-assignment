#include <stdio.h>

int main() {
    double base, result = 1.0; // Variables to store the base and the result
    int exponent, i;

    // Input base and exponent from the user
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power using a loop
    for (i = 0; i < exponent; i++) {
        result *= base; // Multiply result by base for each iteration
    }

    // Display the result
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0; // Return success
}
