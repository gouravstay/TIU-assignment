#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

// Function to concatenate two power results
void concatenatePowerResults(double base1, int exp1, double base2, int exp2, char* result) {
    // Calculate powers
    double result1 = power(base1, exp1);
    double result2 = power(base2, exp2);

    // Convert to strings
    char str1[50], str2[50];
    sprintf(str1, "%.2lf", result1);
    sprintf(str2, "%.2lf", result2);

    // Concatenate the two strings
    strcpy(result, str1);
    strcat(result, str2);
}

int main() {
    double base1, base2;
    int exp1, exp2;
    char result[100];

    // Input the first base and exponent
    printf("Enter the first base: ");
    scanf("%lf", &base1);
    printf("Enter the first exponent: ");
    scanf("%d", &exp1);

    // Input the second base and exponent
    printf("Enter the second base: ");
    scanf("%lf", &base2);
    printf("Enter the second exponent: ");
    scanf("%d", &exp2);

    // Call the function to concatenate power results
    concatenatePowerResults(base1, exp1, base2, exp2, result);

    // Display the result
    printf("Concatenated result of %.2lf^%d and %.2lf^%d is: %s\n", base1, exp1, base2, exp2, result);

    return 0;
}
