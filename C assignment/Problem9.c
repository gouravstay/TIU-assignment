#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number to compare later

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    // Check if the original number and the reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum); // If they are the same, it is a palindrome
    } else {
        printf("%d is not a palindrome.\n", originalNum); // If they are not the same, it is not a palindrome
    }

    return 0; // Return success
}
