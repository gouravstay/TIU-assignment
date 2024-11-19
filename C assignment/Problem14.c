// C Program to Display Factors of a Number 
#include <stdio.h>

int main() {
    int num, i;

    // Input an integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are:\n", num);

    // Loop through numbers from 1 to num
    for (i = 1; i <= num; i++) {
        if (num % i == 0) { // Check if i is a factor of num
            printf("%d ", i); // Print the factor
        }
    }

    printf("\n"); // New line for better readability
    return 0; // Return success
}
