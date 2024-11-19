// C Program to Display Armstrong Numbers Between Two Intervals:
#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, n, result;

    // Input the interval from the user
    printf("Enter the starting interval: ");
    scanf("%d", &start);
    printf("Enter the ending interval: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Loop through each number in the interval
    for (num = start; num <= end; num++) {
        originalNum = num; // Store the original number
        result = 0; // Reset result for each number
        n = 0; // Reset digit count for each number

        // Count the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++; // Increment digit count
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
            printf("%d ", num); // Print the Armstrong number
        }
    }

    printf("\n"); // New line for better readability
    return 0; // Return success
}
