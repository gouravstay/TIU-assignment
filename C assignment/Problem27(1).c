#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0;
    int power = 0;

    while (binary != 0) {
        int last_digit = binary % 10; // Get the last digit
        decimal += last_digit * pow(2, power); // Add the converted value
        binary /= 10; // Remove the last digit
        power++; // Increase power for next binary digit
    }

    return decimal;
}

int main() {
    long long binary;

    // Get user input
    printf("Enter a binary number: ");
    if (scanf("%lld", &binary) != 1) { // Check if input is valid
        printf("Invalid input. Please enter a valid binary number.\n");
        return 1; // Exit with error code
    }

    // Convert and display the result
    int decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
