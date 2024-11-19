#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: if b is 0, GCD is a
    }
    return gcd(b, a % b); // Recursive case
}

int main() {
    int num1, num2;

    // Get user input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display the GCD
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
    } else {
        int result = gcd(num1, num2);
        printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    }

    return 0;
}
