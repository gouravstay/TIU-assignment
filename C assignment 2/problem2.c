#include <stdio.h>

int main() {
    int number;
    int fact = 1;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (number > 12) {
        printf("Factorial of %d is too large to be stored in an int.\n", number);
    } else {
        // Calculate the factorial using a loop
        for (int i = 1; i <= number; i++) {
            fact = fact * i; // Explicitly multiply and assign
        }

        // Print the factorial of the number
        printf("Factorial of %d is: %d\n", number, fact);
    }

    return 0;
}
