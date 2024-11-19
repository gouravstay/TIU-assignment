// C Program to Check Armstrong Number:
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num; // Reset originalNum for the next calculation

    // Calculate the sum of the digits raised to the power of n
    while (originalNum != 0) {
        remainder = originalNum % 10; // Get the last digit
        result += pow(remainder, n); // Add the power of the digit to result
        originalNum /= 10; // Remove the last digit
    }

    // Check if the result is equal to the original number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0; // Return success
}
