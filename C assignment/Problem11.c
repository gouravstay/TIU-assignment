#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    // Input the interval from the user
    printf("Enter the starting interval: ");
    scanf("%d", &start);
    printf("Enter the ending interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the interval
    for (i = start; i <= end; i++) {
        if (i < 2) continue; // Skip numbers less than 2, as they are not prime
        isPrime = 1; // Assume the number is prime

        // Check for factors
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) { // If i is divisible by j
                isPrime = 0; // Not prime
                break; // Exit the inner loop
            }
        }

        // If isPrime is still 1, print the number
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n"); // New line for better readability
    return 0; // Return success
}
