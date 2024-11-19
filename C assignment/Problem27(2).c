// 2. Decimal to Binary Conversion
#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }

    int binary[32]; // Array to store binary digits
    int index = 0;

    while (decimal > 0) {
        binary[index] = decimal % 2; // Get the remainder
        decimal /= 2; // Divide the number by 2
        index++; // Move to the next index
    }

    // Print the binary number in reverse order
    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Get user input
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert and display the result
    decimalToBinary(decimal);

    return 0;
}
