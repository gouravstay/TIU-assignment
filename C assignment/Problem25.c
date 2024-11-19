#include <stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    if (n < 0) {
        return -1; // Return -1 for negative numbers (factorial not defined)
    }
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1 and 1! = 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;

    // Get user input
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Calculate and display the factorial
    int result = factorial(number);
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is: %d\n", number, result);
    }

    return 0;
}
