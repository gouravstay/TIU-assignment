#include <stdio.h>

int main() {
    int num, count = 0;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle the case when the number is zero
    if (num == 0) {
        count = 1;  // Zero has one digit
    } else {
        // If the number is negative, make it positive
        if (num < 0) {
            num = -num;  // Convert to positive
        }
        
        // Count the number of digits
        while (num != 0) {
            num /= 10;  // Remove the last digit
            count++;    // Increment the count
        }
    }

    // Display the result
    printf("Number of digits: %d\n", count);

    return 0;
}
