#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) { // Check up to the square root of num
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // It's a prime number
}

// Function to display prime numbers in a given interval
void displayPrimesInInterval(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num); // Print the prime number
        }
    }
    printf("\n"); // New line after displaying all primes
}

int main() {
    int start, end;

    // Input the interval from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Call the function to display prime numbers in the given interval
    displayPrimesInInterval(start, end);

    return 0; // Return success
}
