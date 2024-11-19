// C Program to Find the Length of a String
#include <stdio.h>
#include <string.h> // for strlen() function

int main() {
    char str[100]; // Array to hold the input string
    int length;    // Variable to hold the length of the string

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string with spaces

    // Calculate the length of the string
    length = strlen(str); // Get the length using strlen()

    // Remove the newline character if present
    if (length > 0 && str[length - 1] == '\n') {
        length--; // Decrease length by 1 if there's a newline
    }

    // Display the length
    printf("Length of the string: %d\n", length);

    return 0; // Return success
}
