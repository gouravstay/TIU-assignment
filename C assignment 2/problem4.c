#include <stdio.h>

int main() {
    int number;
    int m, reversed = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    m = number; // Store the original number

    // Reverse the number
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        number /= 10; // Remove the last digit
    }

    // Check and print if the original number is a palindrome
    if (m == reversed) {
        printf("%d is a palindrome.\n", m);
    } else {
        printf("%d is not a palindrome.\n", m);
    }

    return 0;
}
