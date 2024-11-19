#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // Variable to store the number and flags for prime check

    // Input an integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2 (not prime)
    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        // Loop to check for factors
        for (i = 2; i * i <= num; i++) { // Check up to the square root of num
            if (num % i == 0) { // If num is divisible by i, it is not prime
                isPrime = 0;
                break; // No need to check further if a factor is found
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", num); // If isPrime remains 1
    } else {
        printf("%d is not a prime number.\n", num); // If isPrime is set to 0
    }

    return 0; // Return success
}
