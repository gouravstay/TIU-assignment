#include <stdio.h>
#include <ctype.h> // for isalpha() function

int main() {
    char str[100]; // Input string
    char result[100]; // String to store the result
    int i, j = 0; // Loop counters

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string with spaces

    // Iterate through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet
        if (isalpha(str[i])) {
            result[j] = str[i]; // If it's an alphabet, add to result
            j++; // Increment result index
        }
    }

    result[j] = '\0'; // Null-terminate the result string

    // Display the result
    printf("String after removing non-alphabetic characters: %s\n", result);

    return 0; // Return success
}
