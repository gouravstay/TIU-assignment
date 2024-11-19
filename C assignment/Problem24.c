#include <stdio.h>

// Function to calculate the sum of natural numbers using recursion
int sumOfNaturalNumbers(int n) {
    if (n <= 0) {
        return 0; // Base case: if n is 0 or negative, return 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursive case
    }
}

int main() {
    int number;

    // Get user input
    printf("Enter a natural number: ");
    scanf("%d", &number);

    // Calculate and display the sum
    if (number < 0) {
        printf("Please enter a positive natural number.\n");
    } else {
        int sum = sumOfNaturalNumbers(number);
        printf("The sum of natural numbers up to %d is: %d\n", number, sum);
    }

    return 0;
}
