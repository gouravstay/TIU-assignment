#include <stdio.h>

int main() {
    int number;      // Variable to store the user's input
    int sum = 0;    // Variable to hold the sum of the digits

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);  // Read the number from the user

    // Calculate the sum of the digits
    while (number > 0) {
        sum += number % 10; // Get the last digit and add it to the sum
        number /= 10;       // Remove the last digit
    }

    // Print the sum of the digits
    printf("Sum of the digits is: %d\n", sum);

    return 0;  // End of the program
}
